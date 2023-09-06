#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int c;
	char x[500];

	for (c = 0; *(s + c) != '\0'; c++)
	{
		x[c] = *(s + c);
	}

	for (c = c - 1; c >= 0; c--)
	{
		x[c] = *(s + c);
	}
}
