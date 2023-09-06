#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: character to print
 * Return: Always 0
 */

void print_rev(char *s)
{
	int c, i;

	for (c = 0; *(s + c) != '\0'; c--)
	{
		s--;
		_putchar(*(s + c));
	}

	for (i = 0; s[i] != '\0'; i--)
	{
		s--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
