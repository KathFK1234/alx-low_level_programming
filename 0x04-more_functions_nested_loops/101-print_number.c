#include "main.h"

/**
 * print_number - prints integer
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar(n);
	}

	if (n < 0)
	{
		n *= -1;
		_putchar(n);
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
