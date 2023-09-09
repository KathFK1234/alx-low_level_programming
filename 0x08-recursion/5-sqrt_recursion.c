#include "main.h"

/**
 * _sqrt_recursion - returns natural root of number
 * @n: number
 * Return: Natural root of number
 */

int _sqrt_recursion(int n)
{
	int x;

	if (n <= 0)
		return (-1);

	else if ((x * x) > n)
		return (-1);

	else if ((x * x) == n)
		return (x);
	return (x);
}
