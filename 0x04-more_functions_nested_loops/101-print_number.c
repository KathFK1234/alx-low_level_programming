i#include "main.h"

/**
 * main - Entry point
 * print_number = prints integer
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	int a;
	int b = 1;
	unsigned int k, m, x = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			x = n * -1;
			_putchar('-');
		}

		while (b <= x)
			b *= 10;

		while ((b / 10) >= 1)
		{
			m = x / (b / 10);
			_putchar(digit + '0');
			x = (x - ((b / 10) * m));
			(b / 10) /= 10;
		}
	}
}
