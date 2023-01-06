#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table array
 * @size: size of required array
 * Return: A pointer to the array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t new_table;
	hash_table_t *new_p;
	hash_node_t *arr;


	arr = malloc(size * sizeof(hash_node_t));
	if (arr == NULL)
	{
		return (NULL);
	}
	new_table.size = size;
	new_table.array = &arr;
	free(arr);

	new_p = &new_table;
	return (new_p);
}
