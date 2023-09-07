#include "main.h"
#define NULL 0

/**
 * _strchr - locates character in string
 * @s: string
 * @c: character to locate
 * Return: Pointer to first occurrence of c in string
 * Return: NULL if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
