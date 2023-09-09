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

	else if ((x * x) > n)
		return (-1);

	else if ((x * x) == n)
		return (x);

	_sqrt_recursion(n + 1);
	return (x);
}
