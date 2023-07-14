#include "hash_tables.h"

/**
 * key_index - Get the index for a key in the hash table array
 * @key: The key
 * @size: The size of the array
 *
 * Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
