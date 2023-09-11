#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog struct, NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int x, bname, bowner;

	ndog = malloc(sizeof(ndog));
	if (ndog == NULL)
		return (NULL);

