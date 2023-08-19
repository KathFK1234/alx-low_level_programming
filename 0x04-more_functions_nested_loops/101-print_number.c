#include "main.h"

/**
 * print_number - prints integer
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	int b = 1;
	unsigned int k = n;
	unsigned int m = n;
	unsigned int x = n;

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
		k = b / 10;

		while (k >= 1)
		{
			m = x / k;
			_putchar(m + '0');
			x = (x - (k * m));
			k /= 10;
		}
	}
}
