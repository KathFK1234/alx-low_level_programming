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
	char x = '#';

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (w = h; w < size; w++)
			{
				_putchar(' ');
			}
			
			for (w = 1; w <= h; l++)
				_putchar(x);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
