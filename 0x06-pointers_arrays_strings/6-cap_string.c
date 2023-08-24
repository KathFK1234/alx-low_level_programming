#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int x, alpha;
	int sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; sep[x] != '\0'; x++)
	{
		for (alpha = 0; s[alpha] != '\0'; alpha++)
		{
			if (s[alpha] >= 'a' && s[alpha] <= 'z')
			{
				s[alpha] = s[alpha] - 32;
			}
		}
	return (s);
}
