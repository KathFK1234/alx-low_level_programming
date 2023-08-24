#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: generate random valid passwords for 101-crackme
 * Return: Always 0
 */

int main(void)
{
	int c, x;
	int k = 0;
	int p[100];

	srand(time(NULL));

	for (c = 0; c < 100; c++)
	{
		p[c] = rand() % 78;
		k += (p[c] + '0');
		printf("%d\n", p[c] + '0');
		if ((2772 - k) < 78)
		{
			x = 2772 - k - '0';
			k += x;
			printf("%d\n", x + '0');
			break;
		}
	}
	return (0);
}
