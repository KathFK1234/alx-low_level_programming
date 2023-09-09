#include "main.h"

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if else
 */

int is_palindrome(char *s)
{
	int x;

	if (*s == '\0')
		return (1);

	if (*s != '\0')
	{
		while (x == 0)
		{
			if (s[x] != '\0')
			{
				if (x++ == x--)
					return (1);
				else
					return (0);
			}
		}
	}
	is_palindrome(s + 1);
}
