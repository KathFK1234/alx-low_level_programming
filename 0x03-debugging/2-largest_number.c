#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	for (a = 972; a > c;)
	{
		for (c = 0; c > b;)
		{
			for (b = -98; ;)
			{
				if (a > b && a > c)
				{
					largest = largest_number(a, b, c);
				}
			}
		}
	}
	return (largest);
}
