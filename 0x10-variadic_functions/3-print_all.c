#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints character
 * @an: list
 */

void print_char(va_list an)
{
	printf("%c", va_arg(an, int));
}

/**
 * print_int - prints integer
 * @an: list
 */

void print_int(va_list an)
{
	printf("%d", va_arg(an, int));
}

/**
 * print_float - prints float
 * @an: list
 */

void print_float(va_list an)
{
	printf("%f", va_arg(an, double));
}

/**
 * print_string - prints string
 * @an: list
 */

void print_string(va_list an)
{
	char *s;

	s = va_arg(an, char *);
	if (s == NULL)
		printf("(nil)");

	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of args passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list an;
	char *sep = "";
	int x = 0;
	int y = 0;
	type check[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(an, format);

	while (format && format[x])
	{
		while (check[y].t)
		{
			if (*check[y].t == format[x])
			{
				printf("%s", sep);
				check[y].f(an);
				sep = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(an);
}
