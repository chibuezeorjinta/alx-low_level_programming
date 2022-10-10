#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print values of struct
 * @d: given struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
			if (d->name == NULL)
			{
				printf("Name: (nil)\n");
			}
			else
				printf("Name: %s\n", d->name);
			if (d->age == NULL)
			{
				printf("Age: (nil)\n");
			}
			else
			{
				printf("Age: %f\n", d->age);
			}
			if (d->owner == NULL)
			{
				printf("Owner: (nil)\n");
			}
			else
			{
				printf("Owner: %s\n", d->owner);
			}
	}
}
