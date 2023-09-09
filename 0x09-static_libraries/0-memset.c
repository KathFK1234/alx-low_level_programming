#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area string
 * @b: constant byte
 * @n: first set of bytes
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
