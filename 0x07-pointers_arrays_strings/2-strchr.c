#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character in string
 * @s: string
 * @c: character to locate
 * Return: Pointer to c in string, NULL if not found
 */

char *_strchr(char *s, char c)
{
	/*char *pointer = NULL;*/

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
