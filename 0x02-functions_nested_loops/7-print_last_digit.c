#include "main.h"

/**
 * main - print last digit of number
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int ld;
	
	if (n < 0)
	{
		n = -n;
	}
	ld = n % 10;
	_putchar('%d\n', n, ld);
	return (ld);
}
