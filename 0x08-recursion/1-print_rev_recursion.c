#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
}
