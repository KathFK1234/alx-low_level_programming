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
			for (w = 0; w < size; w++)
			{
				if (w < (size - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(x);
				}
			}
		}
		(size - 1)--;
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
