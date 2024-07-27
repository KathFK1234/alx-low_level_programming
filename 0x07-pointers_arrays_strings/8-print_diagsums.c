#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a:matrix
 * @size: size of matrix
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int x, sum;
	int diagonal_1 = 0;
	int diagonal_2 = 0;

	for (x = 0; x < size; x++)
	{
		sum = (x * size) + x;
		diagonal_1 += a[sum];
	}

	for (x = 0; x < size; x++)
	{
		sum = (x * size) - x;
		diagonal_2 += a[sum];
	}

	printf("%d, %d\n", diagonal_1, diagonal_2);
}
