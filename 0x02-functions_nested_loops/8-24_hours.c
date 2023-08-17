#include "main.h"

/**
 * main - print every minute of day
 * jack_bauer - print every minute of day from 00:00 to 23:59
 * Return: Always 0
 */

void jack_bauer(void);
{
	int hours = 0;
	int min = 0;

	for (hours = 0; hours <= 23; hours++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
