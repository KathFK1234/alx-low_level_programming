#include "main.h"

/**
 * _sqrt_recursion - returns natural root of number
 * @n: number
 * Return: Natural root of number
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n <= 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else if (n / x != x)
		return (-1);

	else if (n / x == x)
		return (x);

	_sqrt_recursion(n + 1);
	return (x);
}
