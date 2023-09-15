#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_char(va_list an);

void print_int(va_list an);

void print_float(va_list an);

void print_string(va_list an);

void print_all(const char * const format, ...);

typedef struct type
{
	char *anf;
	void (*f)(va_list an);
} type;

#endif
