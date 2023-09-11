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
	unsigned int x = 1;
	unsigned int y = 1;
	unsigned int a = x + y;

	for (; x < argc; x++)
	{
		for (; y < argc; y++)
		{
			if (argv[x] != '\0' && argv[y] != '\0')
				printf("%s\n", argv[a]);
			else if (argv[x] == '\0' && argv[y] == '\0')
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
