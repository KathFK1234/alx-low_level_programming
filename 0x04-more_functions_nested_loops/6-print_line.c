#include "main.h"

/**
 * main - Entry point
 * print_line - draws straight line in terminal
 * @n: number of times _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int e;
	char d = '_';

	for (e = n; ; e++)
	{
		if (n <= 0)
			_putchar('\n');

		_putchar(d);
	}
	_putchar('\n');
}