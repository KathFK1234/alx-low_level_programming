#include "main.h"

/**
 * main - Entry point
 * print_diagonal - draws diagonal line on terminal
 * @n: number of times \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int u;
	int t;
	char v = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (u = 1; u <= n; u++)
		{
			for (t = 1; t < u; t++)
				_putchar(' ');
			_putchar(v);
			_putchar('\n');
		}
	}
}
