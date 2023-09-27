#include "main.h"

/**
 * _print_rev_recursion - prints str in rev
 * @s: string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s--;
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
