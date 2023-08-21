#include "main.h"

/**
 * puts_half - prints half of string
 * @*str: character to print
 * Return: Always 0
 */

void puts_half(char *str)
{
	int c;
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{}

	if (x % 2 == 0)
	{
		for (c = x / 2; c < x; c++)
		{
			_putchar(*(str + c));
		}
	}
	else
	{
		for (c = (x - (x - 1) / 2); c < x; c++)
		{
			_putchar(*(str + c));
		}
	}
	_putchar(10);
}
