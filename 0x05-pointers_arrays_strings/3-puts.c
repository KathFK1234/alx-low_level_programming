#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: character to print
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		str++;
	}

	_putchar(str);
	_putchar('\n');
}
