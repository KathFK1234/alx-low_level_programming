#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k;
	int m;
	int f = 0;

	for (m = 0; m < 9; m++)
	{
		for (k = m + 1; k <= 9; k++)
		{
			putchar('0' + m);
			putchar('0' + k);
			if (m != '8' || k != '9')
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				f = 1;
			}
		}
	}
	if (f)
		putchar('\n');
	return (0);
}
