#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to print
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
}
