#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int c, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{}

	for (c = 0; c < i; c++)
	{
		_putchar(s[c]);
	}

	_putchar('\n');

	for (c = i - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
}
