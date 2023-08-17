#ifndef _MAIN_H_
#define _MAIN_H_

int main(void);

/**
 * main - print _putchar followed by a new line
 * Return: Always 0
 */

int _putchar(char c);

/**
 * main - write character c to stdout
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always 0
 */

void print_alphabet(void);

/**
 * main - print lowercase alphabet
 * print_alphabet - print lowercase alphabet
 * Return: Always 0
 */

void print_alphabet_x10(void);

/**
 * main - print lowercase alphabet ten times
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * Return: Always 0
 */

int _islower(int c);

/**
 * main - check for lowercase alphabet characters
 * _islower - checks for lowercase alphabet characters
 * @c: character to check
 * Return: 1 if lowercase, 0 if otherwise
 */

int _isalpha(int c);

/**
 * main - check for alphabet character
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase letter, 0 if otherwise
 */

int print_sign(int n);

/**
 * main - print sign of number
 * print_sign - prints sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int _abs(int);

/**
 * main - compute absolute value of integer
 * _abs - compute absolute value of integer
 * @int: integer
 * Return: Always 0
 */

int print_last_digit(int);

/**
 * main - print last digit of integer
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: Always 0
 */

void jack_bauer(void);

/**
 * main - print every minute of day from 00:00 to 23:59
 * jack_bauer - print every minute of day from 00:00 to 23:59
 * Return: Always 0
 */

void times_table(void);

/**
 * main - print 9 multiplication table
 * times_table - prints 9 multiplication table
 * Return: Always 0
 */

int add(int a, int b);

/**
 * main - add two integers
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */

void print_to_98(int n);

/**
 * main - print numbers n to 98
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 * Return: Always 0
 */

void print_times_table(int n);

/**
 * main - print multiplication table of n
 * print_times_table - prints multiplication table of n
 * @n: integer argument
 * Return: Always 0
 */

#endif
