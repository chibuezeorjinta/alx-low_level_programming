#include "search_algos.h"

/**
 * linear_search - search algorith of linear search example
 *
 * @array: input
 * @size: size of the array
 * @value: target value
 * Return: index of target, (-1) if not found. 
 */
int linear_search(int *array, size_t size, int value)
{
	int n;

	if (array == NULL)
		return (-1);

	for (n = 0; n < (int)size; n++)
	{
		printf("Value checked array[%u] = [%d]\n", n, array[n]);
		if (value == array[n])
			return (n);
	}
	return (-1);
}
