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
	int x = 1;
	int y = 2;
	int a;

	if (x < argc)
	{
		for (; y < argc; y++)
		{
			if (argv[x] != argv[argc] && argv[y] != argv[argc])
			{
				argv[a] = argv[x] + argv[y];
				printf("%s\n", argv[a]);
			}
			else if (argv[x] == argv[argc] && argv[y] == argv[argc])
				printf("0\n");
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
