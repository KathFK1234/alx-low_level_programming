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
	int x = 0;
	int y = 0;
	int a = x + y;

	for (; x < argc; x++)
	{
		for (; y < argc; y++)
		{
			if (argv[x] != argv[argc] && argv[y] != argv[argc])
				printf("%s\n", argv[a]);
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
