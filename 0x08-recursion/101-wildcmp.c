#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: seconf string
 * Return: 1 if identical, 0 if else
 */

int wildcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	
	if ((s1[x] - s2[y]) == 0 && s1[x] != '\0')
	{
		x++; y++;
		return (1);
	}
	else if (s1 == "*" || s2 == "*")
	{
		if (s1[x] == s2[x] && s1[x] != '\0')
			return (1);
	}
	else
		return (0);
}
