#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, y, z, a, b;
	int cents[5] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	if (argc == 2)
	{
		for (x = 0; x < argc; x++)
		{
			y = atoi(argv[x]);
			z = cents[x];
			a = y / z;
			b = y % z;
		}
		printf("%d\n", b);
	}
	return (0);
}
