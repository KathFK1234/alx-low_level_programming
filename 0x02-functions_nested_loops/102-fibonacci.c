#include <stdio.h>

/**
 * main - main function
 * Return: Always 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;
	long c = a + b;

	printf("%li, %li, ", a, b);
	for (counter = 3; counter <= countto; counter++)
	{
		printf("%li", c);
		if (counter < countto)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
