#include "main.h"

/**
 * _puts - prints string to stdout
 * @*str: character to print
 * Return: Always 0
 */

void _puts(char *str)
{
	_putchar('%s\n', *str);
	_putchar('\n');
}
