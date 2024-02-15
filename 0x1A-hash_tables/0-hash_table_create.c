#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Create a new hash table with size @size
 * @size: The size of the newly to be created hash table
 *
 * Return: A pointer to the newly created hash table, or NULL otherwise
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	{
		unsigned int i = 0;

		for (i = 0; i < size; i++)
		{
			new_hash_table->array[i] = NULL;
		}
	}

	return (new_hash_table);
}
