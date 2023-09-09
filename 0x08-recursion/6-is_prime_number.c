#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: number to check
 * Return: 1 if prime, 0 if else
 */

int is_prime_number(int n)
{
	int m;

	if (n <= 1)
		return (0);

	if (n % 2 == 0)
	{
		if (n == 2)
			return (1);
		return (0);
	}
	else
		return (1);

	if (n / m == 0)
	{
		if (m != 1)
			return (0);
	}
	else
		return (1);
}
