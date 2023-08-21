#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @*a: First integer
 * @*b: Second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}
