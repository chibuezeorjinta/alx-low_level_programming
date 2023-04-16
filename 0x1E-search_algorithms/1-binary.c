#include "search_algos.h"

/**
 * rec - main function to find an index
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int rec(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (rec(array, half, value));

	half++;

	return (rec(array + half, size - half, value) + half);
}

/**
 * binary_search - check the output of the rec function to see if the output is within the array
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = rec(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
