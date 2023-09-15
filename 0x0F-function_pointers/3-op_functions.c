#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a and b
 * @a: int
 * @b: int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts a and b
 * @a: int
 * @b: int
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a and b
 * @a: int
 * @b: int
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a and b
 * @a: int
 * @b: int
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns rem of division of a and b
 * @a: int
 * @b: int
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
