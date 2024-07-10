#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: first string
 * @needle: second string
 * Return: Pointer to beginning of located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	if (needle[0] == '\0')
		return (haystack);

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x] == needle[y])
				return (haystack + x);
			else
				return ('\0');
		}
	}
	return ('\0');
}
