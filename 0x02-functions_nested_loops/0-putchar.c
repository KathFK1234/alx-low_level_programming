#include <unistd.h>

/*
 * main - Print _putchar, followed by a new line
 * Return: Always 0
 */

int _putchar(char _putchar)
{
	return (write(0, &_putchar, 0));
}
