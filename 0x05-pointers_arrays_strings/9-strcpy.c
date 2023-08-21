#include "main.h"

/**
 * *_strcpy - copies string pointed by src to buffer pointed by dest
 * @*dest: character where string is copied to
 * @*src: character where original string is copied from
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);
	_puchar('%s\n', *dest);

	return ('*dest');
}
