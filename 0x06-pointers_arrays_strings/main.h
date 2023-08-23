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

char *_strcat(char *dest, char *src);

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src string
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strncpy - copies string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2);

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */

void reverse_array(int *a, int n);

/**
 * reverse_array - reverses content of array of integers
 * @a: array
 * @n: number of elements of array
 * Return: Always 0
 */

char *string_toupper(char *s);

/**
 * string_toupper - changes all lowercase letters of string to uppercase
 * @s: string
 * Return: Always 0
 */

char *cap_string(char *s);

/**
 * cap_string - capitalizes all words of string
 * @s: string
 * Return: string
 */

char *leet(char *s);

/**
 * leet - encodes string into 1337
 * @s: string
 * Return: Always 0
 */

char *rot13(char *s);

/**
 * rot13 - encodes string using rot13
 * @s: string
 * Return: Always 0
 */

void print_number(int n);

/**
 * print_number - prints integer
 * @n: integer to print
 * Return: Always 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that function will use to store result
 * @size_r: buffer size
 * Return: pointer to result, 0 if result not stored in r
 */

void print_buffer(char *b, int size);

/**
 * print_buffer - prints buffer
 * @b: string
 * @size: size of bytes of buffer pointed by b
 * Return: Always 0
 */

#endif
