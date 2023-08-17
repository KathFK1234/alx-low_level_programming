#include "main.h"

/**
 * main - print last digit of number
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: value of last digit
 */

int print_last_digit(int n)
{	
	_putchar('0' + (n % 10));
	
	return (n % 10);
}
