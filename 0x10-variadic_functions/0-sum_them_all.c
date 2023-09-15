#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sums of all parameters
 * @n: integer
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int y = 0;
	va_list sum;

	if (n == 0)
		return (0);
	
	va_start(sum, n);
	
	for (x = 0; x < n; x++)
		y += va_arg(sum, int);

	va_end(sum);
	return (y);
}
