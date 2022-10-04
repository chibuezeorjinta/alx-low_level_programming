#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Entey
 * @size: Required size of the array
 * @c: First character of array
 * Return: if size = 0b return NULL, else return array, else return NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else if (size != 0)
	{
		array = (char*)  malloc(size);
		for (i = 0; i < size; i++)
			array[i] = c;
		return (array);
	}
	else
		return (NULL);
}
