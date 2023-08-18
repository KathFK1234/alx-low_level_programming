#include <stdio.h>
#include "main.h"

/**
 * * print_remaining_days - takes a date and prints how many days are
 * * left in the year, taking leap years into account
 * * @month: month in number format
 * * @day: day of month
 * * @year: year
 * * Return: void
 * */

void print_remaining_days(int month, int day, int year)
{
	int dom[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int doy = 0;
	int is_ly;
	int i;

	for (i = 1; i < month; i++)
	{
		doy += dom[i];
	}
	doy += day;

	if ((year % 4 == 0 && year % 100 == 0) || !(year % 400 == 0))
	{
		if (month > 2)
		{
			doy++;
		}
	}
		
	if (month < 1 || month > 12 || day < 1|| day > dom[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", doy);
		printf("Remaining days: %d\n", (is_ly(year) ? 366 : 365) - doy);
	}
}
