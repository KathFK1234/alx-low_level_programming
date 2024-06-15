#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k;
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (k > m && k != m)
			{
				putchar(m);
				putchar(k);
				if (m == '8' && k == '9')
					continue;
				else
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
