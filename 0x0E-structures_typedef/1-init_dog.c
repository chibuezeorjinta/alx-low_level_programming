#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialise struct
 * @d: struct of dog
 * @name: name of dog
 * @age: of dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
