#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to reverse
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s--;
	_putchar(*s);
}
