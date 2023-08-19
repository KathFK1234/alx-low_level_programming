#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int u;
	int r;

	for (u = 1; u <= 10; u++)
	{
		for (r = 1; r <= 14; r++)
		{
			if (r > 9)
			{
				_putchar((r / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
