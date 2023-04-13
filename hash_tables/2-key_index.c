#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: The key itself
 * @size: The size of the array of the hash table
 * Return: The index at which the key/value pair should
 * be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
