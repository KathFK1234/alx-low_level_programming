#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array of integers
 * @a: array to print
 * @n: elements of array to print
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
