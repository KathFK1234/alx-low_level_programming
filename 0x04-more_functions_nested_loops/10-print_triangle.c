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
	int n = size - 1;
	char x = '#';

	if (size > 0)
	{
		for (; h <= size; h++)
		{
			for (w = 0; w < size; w++)
			{
				if (w < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(x);
				}
			}
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
