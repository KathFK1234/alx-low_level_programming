#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: number of times _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int e;

	if (n > 0)
	{
		for (e = 0; e < n; e++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
