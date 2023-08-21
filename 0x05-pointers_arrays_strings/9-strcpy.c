#include "main.h"

/**
 * *_strcpy - copies string pointed by src to buffer pointed by dest
 * @dest: character where string is copied to
 * @src: character where original string is copied from
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	for (; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	dest[c] = '\0';

	return (dest);
}
