#include "main.h"

/**
 * main - Entry point
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int h;
	int w;
	int l;
	char x = '#';

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
		{
			_putchar(' ');
		}
		
		for (l = 1; l <= h; l++)
				_putchar(x);
	}
	if (size <= 0)
	{
		_putchar('\n')
	}

	return (0);
}
