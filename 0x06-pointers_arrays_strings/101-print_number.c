#include "main.h"
#include <limits.h>

/**
 * print_number - prints integer
 * @n: integer to print
 * Return: Always 0
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar(n);
	}

	if (n == INT_MIN)
	{
		_putchar('-');
		print_number(-1 * (n + 1));
		_putchar('8');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
