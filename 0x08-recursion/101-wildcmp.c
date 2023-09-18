#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: seconf string
 * Return: 1 if identical, 0 if else
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
	{
		wildcmp(s1 + 1, s2 + 1);
		return (1);
	}

	if (*s2 == '*')
	{
		wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
		return (1);
	}
	return (0);
}
