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
	int c;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{}

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[x] = src[c];
		x++;
		c++;
	}
	dest[x] = '\0';
	return dest;
}
