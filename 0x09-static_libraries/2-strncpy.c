#include "main.h"

/**
 * _strncpy - copies string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
