#include "main.h"

/**
 * _sqrt_recursion - returns natural root of num
 * @n: integer to find root
 * Return: natural root, -1 if not
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n <= 0)
		return (-1);

	if (x > 0)
	{
		if ((n / x) != x)
			return (-1);

		else if ((n / x) == x)
			return (x);
	}
	_sqrt_recursion(n);
	return (x);
}
