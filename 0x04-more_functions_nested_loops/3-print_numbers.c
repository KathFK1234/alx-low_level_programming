#include "main.h"

/**
 * main - Entry point
 * print_numbers = prints numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void);
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
