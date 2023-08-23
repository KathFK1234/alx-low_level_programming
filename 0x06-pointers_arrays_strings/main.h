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

char *string_toupper(char *);

/**
 * string_toupper - changes all lowercase letters of string to uppercase
 * @*: string
 * Return: Always 0
 */

char *cap_string(char *);

/**
 * cap_string - capitalizes all words of string
 * @*: string
 * Return: Always 0
 */

char *leet(char *);

/**
 * leet - encodes string into 1337
 * @*: string
 * Return: ALways 0
 */

char *rot13(char *);

/**
 * rot13 - encodes string using rot13
 * @*: string
 * Return: Always 0
 */



#endif
