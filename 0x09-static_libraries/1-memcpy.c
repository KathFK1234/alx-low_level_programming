#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
