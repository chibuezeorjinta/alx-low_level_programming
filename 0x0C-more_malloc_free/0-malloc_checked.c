#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Entry
 * @b: length of memory
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
