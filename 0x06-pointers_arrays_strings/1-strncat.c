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

	for (c = 0; dest[c] != '\0'; c++)
	{}

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[c] = src[x];
		x++;
		c++;
	}
	dest[c] = '\0';
	return dest;
}
