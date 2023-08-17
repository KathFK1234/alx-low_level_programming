#include "main.h"

/**
 * main - Entry point
 * _isupper - checks uppercase character
 * @c: character to check
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c);
{
	char c;

	if (c >= 'A' && <= 'Z')
	{
		_putchar('1');
	}
	else if (c >= 'a' && <= 'z')
	{
		_putchar('0');
	}
	else
	{
		_putchar('0');
	}

	return (0);
}
