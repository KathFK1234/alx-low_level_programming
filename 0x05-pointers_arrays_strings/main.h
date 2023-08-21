#ifndef _MAIN_H_
#define _MAIN_H_

int main(void);

/**
 * main - check code
 * Return: Always 0
 */

int _putchar(char c);

/**
 * _putchar - puts character
 * @c: character to put
 */

void reset_to_98(int *n);

/**
 * reset_to_98 - takes pointer to int as parameter and updates value to 98
 * @*n: integer to update value to
 * Return: Always 0
 */

void swap_int(int *a, int *b);

/**
 * swap_int - swaps values of two integers
 * @*a: First integer
 * @*b: Second integer
 * Return: Always 0
 */

int _strlen(char *s);

/**
 * _strlen - returns length of string
 * @*s: character to return length of
 * Return: Length of string
 */

void _puts(char *str);

/**
 * _puts - prints string to stdout
 * @*str: character to print
 * Return: Always 0
 */

void print_rev(char *s);

/**
 * print_rev - prints string in reverse
 * @*s: character to print
 * Return: Always 0
 */

void rev_string(char *s);

/**
 * rev_string - reverses string
 * @*s: character to reverse
 * Return: Always 0
 */

void puts2(char *str);

/**
 * puts2 - prints every other character of string starting with first one
 * @*str: character to print
 * Return: Always 0
 */

void puts_half(char *str);

/**
 * puts_half - prints half of string
 * @*str: character to print
 * Return: Always 0
 */

void print_array(int *a, int n);

/**
 * print_array - prints elements of array of integers
 * @*a: array to print
 * @n: elements of array to print
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src);

/**
 * *_strcpy - copies string pointed by src to buffer pointed by dest
 * @*dest: character where string is copied to
 * @*src: character where original string is copied from
 * Return: Pointer to dest
 */

int _atoi(char *s);

/**
 * _atoi - converts string to integer
 * @*s: character to convert
 * Return: 0 if no numbers, else if number
 */

#endif
