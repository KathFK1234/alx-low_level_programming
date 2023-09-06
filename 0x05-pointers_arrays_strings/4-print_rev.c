#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: character to print
 * Return: Always 0
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; *(s + c) != '\0'; c--)
	{
		s--;
		_putchar(*(s + c));
	}
	_putchar('\n');
}
