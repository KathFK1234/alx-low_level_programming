#include "main.h"

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if else
 */

int is_palindrome(char *s)
{
	int x = 0;
	int y;

	if (*s == '\0')
		return (1);

	if (s[x] != '\0')
	{
		x++;
		y = x - 1;
		if (s[y] != '\0')
		{
			x--;
			y++;
			if (s[x] == s[y])
				return (1);
			else
				return (0);
		}
	}
	is_palindrome(s + 1);
}
