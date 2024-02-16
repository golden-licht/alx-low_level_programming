#include "hash_tables.h"

#include <stdlib.h>

/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table to be deleted
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			hash_node_t *tmp = current->next;

			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
