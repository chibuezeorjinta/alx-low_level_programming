#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - returns the index fromthe hash function
 * @key: the key string to be used
 * @size: size of the hash table
 * Return: index on the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h;

	h = hash_djb2(key);
	return (h % size);
}
