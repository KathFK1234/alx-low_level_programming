#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int x;

	for (c = 0; dest[c] != '\0'; c++)
	{}

	for (x = 0; src[x]x != '\0'; x++)
	{
		dest[c] = src[x];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
