#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k;
	int m;

	for (k = 0; k <= 9; k++)
	{
		for (m = 0; m <= 9; m++)
		{
			putchar(k);
			putchar(m);

			if (m != '8' || k != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
