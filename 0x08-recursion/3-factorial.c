#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - returns factorial of num
 * @n: integer to factor
 * Return: factorial of n, -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
