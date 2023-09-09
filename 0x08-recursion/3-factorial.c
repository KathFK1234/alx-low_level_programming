#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: integer/number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
