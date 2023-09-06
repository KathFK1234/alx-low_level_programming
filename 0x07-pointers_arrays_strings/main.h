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

char *_memset(char *s, char b, unsigned int n);

/**
 * _memset - fills memory with constant byte
 * @s: memory area string
 * @b: constant byte
 * @n: first set of bytes
 * Return: Pointer to memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: Pointer to dest
 */

char *_strchr(char *s, char c);

/**
 * _strchr - locates character in string
 * @s: string
 * @c: character to locate
 * Return: Pointer to first occurrence of c in string, NULL if character not found
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strspn - gets length of prefix substring
 * @s: first string
 * @accept: second string
 * Return: Number of bytes in initial segment of s (only bytes from accept)
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strprbk - searches string for any set of bytes
 * @s: first string
 * @accept: second string
 * Return: Pointer to byte in s that matches in accept, NULL if not found
 */

char *_strstr(char *haystack, char *needle);

/**
 * _strstr - locates substring
 * @haystack: first string
 * @needle: second string
 * Return: Pointer to beginning of located substring, NULL if not found
 */

void print_chessboard(char (*a)[8]);

/**
 * print_chessboard - prints chessboard
 * @a: string
 * @8: array value
 * Return: Always 0
 */

void print_diagsums(int *a, int size);

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: string
 * @size: size of diagonals
 * Return: Always 0
 */

void set_string(char **s, char *to);

/**
 * set_string - sets value of pointer to char
 * @s: pointer
 * @to: string
 * Return: Always 0
 */

#endif
