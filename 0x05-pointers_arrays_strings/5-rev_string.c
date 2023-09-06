#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int c, i;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		_putchar(s[c]);
	}

	_putchar('\n');

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
