#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if else
 */

int is_palindrome(char *s)
{
	int x = 0;
	int y = x - 1;

	if (*s == '\0')
		return (1);

	if (*s != '\0')
	{
		if (s[x] != '\0')
		{
			if (x++ == y--)
				return (0);
			else
				return (1);
		}
	}
	return (0);
}
