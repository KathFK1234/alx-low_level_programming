#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int c;

	for (c = 0; *(s + c) != '\0'; c++)
	{}

	while (c >= 0)
	{
		s[c] = s[c - 1];
		c--;
	}
}
