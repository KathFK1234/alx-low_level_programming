#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k;
	int m;

	for (m = 0; m <= 9; m++)
	{
		for (k = m + 1; k <= 9; k++)
		{
			if (m < k)
			{
				putchar('0' + m);
				putchar('0' + k);
				if (m != '9' || k != '8')
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					break;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
