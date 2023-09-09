#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: first string
 * @accept: second string
 * Return: Number of bytes in initial segment of s (only bytes from accept)
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int length = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				length++;
				break;
			}
			if (s[x] != accept[y] && accept[y + 1] == '\0')
				return (length);
		}
	}
	return (length);
}
