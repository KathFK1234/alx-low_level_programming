#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k;
	int m;

	for (k = 10; k <= 19; k++)
	{
		for (m = 10; m <= 19; m++)
		{
			if ((m % 10) > (k % 10))
			{
				putchar((k % 10) + '0');
				putchar((m % 10) + '0');
				if (k != 18 || m != 19);
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
