#include "main.h"

/**
 * _strlen - returns lenth of string
 * @s: character to return length of
 * Return: Length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
