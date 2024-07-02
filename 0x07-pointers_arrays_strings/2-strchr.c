#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string
 * @c: character to locate
 * Return: Pointer to c in string, NULL if not found
 */

char *_strchr(char *s, char c)
{
	char NULL = '\0';

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
