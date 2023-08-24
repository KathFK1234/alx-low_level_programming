#include "main.h"

/**
 * string_toupper - changes all lowercase letters of string to uppercase
 * @s: string
 * Return: Always 0
 */

char *string_toupper(char *s)
{
	int alpha;

	for (alpha = 0; s[alpha] != '\0'; alpha++)
	{
		if (s[alpha] >= 'a' && s[alpha] <= 'z')
		{
			s[alpha] = s[alpha] - 32;
		}
	}
	return (s);
}
