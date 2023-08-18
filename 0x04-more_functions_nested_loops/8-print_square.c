#include "main.h"

/**
 * main - Entry point
 * print_square = prints square
 * @size: size of square
 * Return: Always 0
 */

void print_square(int size)
{
	int base;
	int height;
	char q = '#';

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (base = 1; base <= size; base++)
		{
			for (height = 1; height <= size; height++)
			{
				_putchar(q);
			}
			_putchar('\n');
		}
	}
}
