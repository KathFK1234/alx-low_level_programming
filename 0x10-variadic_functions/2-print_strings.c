#include "variadic_funtions.h"
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
