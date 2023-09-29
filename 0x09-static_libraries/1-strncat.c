#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src string
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{}

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[x + c] = src[c];
	}
	dest[x + c] = '\0';

	return (dest);
}
