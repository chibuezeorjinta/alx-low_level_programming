#include <stdlib.h>
#include "main.h"

/**
 * array_range - Entry
 * @min: starting number
 * @max: last number
 * Return: pointer to integer array
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
