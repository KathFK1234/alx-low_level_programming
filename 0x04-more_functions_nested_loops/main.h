#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(c);

/**
 * _putchar - puts character
 * @c: character to put
 */

int _isupper(int c);

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isdigit(int c);

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: character to check
 * Return: 1 if digit, 0 if otherwise
 */

int mul(int a, int b);

/**
 * mul - multiplies integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */

void print_numbers(void);

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: Always 0
 */

void print_most_numbers(void);

/**
 * print_most_numbers - prints numbers from 0 to 9
 * Return: Always 0
 */

void more_numbers(void);

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: Always 0
 */

void print_line(int n);

/**
 * print_line - draws straight line in terminal
 * @n: number of times _ should be printed
 * Return: Always 0
 */

void print_diagonal(int n);

/**
 * print_diagonal - draws diagonal line on terminal
 * @n: number of times \ should be printed
 * Return: Always 0
 */

void print_square(int size);

/**
 * print_square - prints square
 * @size: size of square
 * Return: Always 0
 */

void print_triangle(int size);

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: Always 0
 */

void print_number(int n);

/**
 * print_number - prints integer
 * @n: integer
 * Return: Always 0
 */

#endif
