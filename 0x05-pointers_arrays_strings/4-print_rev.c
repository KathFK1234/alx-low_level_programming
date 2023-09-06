#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: character to print
 * Return: Always 0
 */

void print_rev(char *s)
{
	int c, i;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		s++;
	}

	s--;

	for (i = c; i > 0; --i)
	{
		--s;
		_putchar(*s);
	}

	_putchar('\0');
	_putchar('\n');
}
