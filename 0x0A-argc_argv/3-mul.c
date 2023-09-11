#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int k = i * j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < argc; j++)
		{
			_putchar(argv[k]);
		}
	}
	return (0);
}
