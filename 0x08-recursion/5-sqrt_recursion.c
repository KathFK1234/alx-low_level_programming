#include "main.h"

/**
 * _sqrt_recursion - returns natural root of num
 * @n: integer to find root
 * Return: natural root, -1 if not
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
