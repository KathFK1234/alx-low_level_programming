#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k; 
	int m; 
	for (k = 0; k <= 99; k++)
	{
		for (m = k + 1; m <= 99; m++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (!(k == 98 && m == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
