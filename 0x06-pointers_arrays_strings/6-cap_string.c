#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int x, alpha;
	int sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (alpha = 0; s[alpha] != '\0'; alpha++)
	{
		if (s[alpha] >= 'a' && s[alpha] <= 'z')
		{
			s[alpha] = s[alpha] - 32;
		}

		for (x = 0; sep[x] != '\0'; x++)
		{
			if (s[alpha] == sep[x] && s[alpha + 1] >= 'a' && s[alpha + 1] <= 'z')
			{
				s[alpha + 1] = s[alpha + 1] - 32;
			}
		}
	}
	return (s);
}
