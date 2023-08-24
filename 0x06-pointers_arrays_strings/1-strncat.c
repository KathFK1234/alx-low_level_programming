#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src string
 * Return: pointer to dest string
 */

char *strncat(char *dest, char *src, int n)
{
	int c = 0;
	int x;

	while (dest[c] != '\0')
	{
		c++;
	}

	for (x = 0; x < n && src[x] != src[n]; x++)
	{
		dest[c] = src[x];
	}
	dest[c] = '\0';
	return (dest);
}
