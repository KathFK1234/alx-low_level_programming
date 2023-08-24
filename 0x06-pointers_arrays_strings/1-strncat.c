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

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[c + x] = src[x];
	}
	dest[c + x] = '\0';

	return (dest);
}
