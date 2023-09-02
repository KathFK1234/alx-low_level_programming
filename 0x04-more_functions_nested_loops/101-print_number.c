#include "main.h"

/**
 * print_number - prints integer
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	int x = n % 10;

	if (n == 0)
	{
		_putchar('0');
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + x);
}
