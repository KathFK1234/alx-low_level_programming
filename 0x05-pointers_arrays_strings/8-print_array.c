#include "main.h"

/**
 * print_array - prints elements of array of integers
 * @a: array to print
 * @n: elements of array to print
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		_putchar(a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
