#include "main.h"

/**
 * main - check for alphabet character
 * _isalpha - checks for alphabet character
 * Return: 1 if lower or uppercase letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
