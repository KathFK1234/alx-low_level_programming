#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts_recursion - prints str
 * @s: string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
