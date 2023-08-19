#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @n: integer
 * Return: Always 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
