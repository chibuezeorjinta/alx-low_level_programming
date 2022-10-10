#include "dog.h"
#include <stddef.h>

/**
 * new_dog - entry
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return a pointer to a struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newd;
	dog_t *dogout;

	newd.name = name;
	newd.age = age;
	newd.owner = owner;

	dogout = &newd;
	if (dogout == NULL)
		return (NULL);
	return (dogout);
}
