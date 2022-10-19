#ifndef OUR_PRINTF
#define OUR_PRINTF

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - description of the struct
 * @valid: first member
 * @f: second member
 */
typedef struct specifier
{
		char *valid;
			int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);

int (*get_func(char x))(va_list args);

#endif /* OUR_PRINTF */
