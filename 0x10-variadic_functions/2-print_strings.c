#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: num of strings passed to func
 * Return: 0, nil if string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int x;
	char *s;

	va_start(print, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(print, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
