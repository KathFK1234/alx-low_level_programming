#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int x = n % '10';

	if (n < 0)
		n *= -1;

	_putchar('0' + x);
	return (x);
}
