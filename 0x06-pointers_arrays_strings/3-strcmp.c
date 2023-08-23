#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; (s1[x]x - s2[x]) == 0 && s1[x] != '\0'; x++)
	{}

	return (s1[x] - s2[x]);
}
