#include "main.h"

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if else
 */

int is_palindrome(char *s)
{
	int x = 0;
	char *t;

	if (*s == '\0')
		return (1);

	if (s[x] != '\0')
	{
		x++;
		if (t[x] != '\0')
			x--;
		if (s[x] == t[x])
			return (1);
		else
			return (0);
	}
	is_palindrome(s + 1);
}
