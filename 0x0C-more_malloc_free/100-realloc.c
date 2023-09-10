#include "main.h"

/**
 * _realloc - realloc mem block using malloc and free
 * @ptr: pointer to previous mem alloc
 * @old_size: size of allocated space for ptr
 * @new_size: new size of new mem block
 * Return: ptr, NULL if else
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
