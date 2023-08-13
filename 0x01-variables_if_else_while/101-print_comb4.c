#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int j;
	int k;
	int m;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (m = 0; m <= 9; m++)
			{
				if (m > k && k > j)
				{
					putchar(j + '0');
					putchar(k + '0');
					putchar(m + '0');
					if (j != 7 || k != 8 || m != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
