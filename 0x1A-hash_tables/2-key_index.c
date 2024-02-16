#include "hash_tables.h"

/**
 * key_index - Find the index in which a key/value pair
 * should be stored in a hash_table
 * @key: The key
 * @size: The size of the array of the hash_table
 *
 * Return: The index in the table in which the key/value pair is to be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed = hash_djb2(key);
	unsigned long int index = 0;

	if (size == 0)
	{
		return (0);
	}

	index = hashed % size;

	return (index);
}
