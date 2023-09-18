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

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	for (bname = 0; name[bname]; bname++)
		;

	for (bowner = 0; owner[bowner]; bowner++)
		;

	ndog->name = malloc(bname + 1);
	ndog->owner = malloc(bowner + 1);

	if (!(ndog->name) || !(ndog->owner))
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}

	for (x = 0; x < bname; x++)
		ndog->name[x] = name[x];

	ndog->name[x] = '\0';
	ndog->age = age;

	for (x = 0; x < bowner; x++)
		ndog->owner[x] = owner[x];

	ndog->owner[x] = '\0';
	return (ndog);
}

/**
 * free_dog - frees bytes
 * @d: pointer
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
