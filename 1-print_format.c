#include "main.h"

/**
 * _putchar - prints character
 * @c: the character to print
 *
 * Return: code ascii of the char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * get_func - choose the right function to use
 * @x: parameter of the function
 *
 * Return: the function to use
 */
int (*get_func(char x))(va_list)
{
	int i = 0;

	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}

/**
 * print_c - prints a char
 * @args: our parameter
 *
 * Return: 1 which is the length of a char
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_s - prints a string
 * @args: the parameter of type va_list
 *
 * Return: the length of the string
 */
int print_s(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - print the character %
 * @args: must be '%'
 *
 * Return: 1 if % is printed
 */
int print_percent(va_list args)
{
	char str;

	str = '%';
	if (va_arg(args, int) == str)
		_putchar(str);
	return (1);
}
