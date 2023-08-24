#include "main.h"

/**
 * rev_string - reverses string
 * @s: character to reverse
 * Return: Always 0
 */

void rev_string(char *s)
{
	int c;
	int k = 0;
	char x[500];

	for (c = 0; (*(s + c)) != '0'; c++)
	{
		x[c] = *(s + c);
	}

	c = 0;
	while (c >= 0)
	{
		*(s + k) = x[c];
		c++;
		k++;
	}
}
