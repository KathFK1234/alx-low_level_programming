#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: character to convert
 * Return: 0 if no numbers, else if number
 */

int _atoi(char *s)
{
	int c = 1;
	unsigned int x = 0;

	for (; ; s++)
	{
		if (*s == '-')
		{
			c *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			x = (x * 10) + (*s - '0');
		}
		else if (x > 0)
		{
			break;
		}
		else if (*s == '\0')
		{
			return (0);
		}
	}
	return (x * c);
}
