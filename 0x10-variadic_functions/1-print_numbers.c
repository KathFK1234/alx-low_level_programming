#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to print
 * @n: num of int passed to func
 * Return: 0, NULL if separator NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
