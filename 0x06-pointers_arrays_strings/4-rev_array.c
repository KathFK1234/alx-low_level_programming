#include "main.h"

/**
 * reverse_array - reverses content of integers
 * @a: array
 * @n: number of elements of array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int c;
	int x;

	for (c = 0; c < n / 2; c++)
	{
		x = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = x;
	}
}
