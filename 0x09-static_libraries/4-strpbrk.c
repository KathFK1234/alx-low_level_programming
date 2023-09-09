#include "main.h"

/**
 *_strpbrk - searches string for any set of bytes
 *@s: first string
 *@accept: second string
 *Return: Pointer to byte in s that matches in accept, NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return ('\0');
}
