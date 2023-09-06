#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string
 * @c: character to locate
 * Return: Pointer to first occurrence of c in string, NULL if character not found
 */

char *_strchr(char *s, char c)
{
	char *p;

	for (c = 0; *(s[c]) != '\0'; c++)
	{
		p = &c;
		return (p);
	}
}
