#include "main.h"

/**
 * print_d - prints an int
 * @args: an int to print
 *
 * Return: the number of digits of the parameter
 */
int print_d(va_list args)
{
	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		absolute = (n * -1);
		_putchar('-');
		count += 1;
	}
	else
		absolute = n;
	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * print_i - print a character using the ascii code
 * @args: parameter to print
 *
 * Return: the length of what has been printed
 */
int print_i(va_list args)
{
	return (print_d(args));
}
