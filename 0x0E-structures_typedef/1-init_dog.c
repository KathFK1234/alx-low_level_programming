#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes var of type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
