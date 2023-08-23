#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string
 * Return: Always 0
 */

char *leet(char *s)
{
	int c, x;
	int alpha[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (c = 0; alpha[c] != '\0'; c++)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (s[x] == alpha[c])
			{
				s[x] = num[c];
			}
		}
	}

	return (s);
}
