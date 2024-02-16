#include "hash_tables.h"

#include <stdbool.h>
#include <stdio.h>

/**
 * hash_table_print - Print a hash table
 * @ht: The hash table to be printed
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	bool comma = false;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			comma = true;
		}
	}
	printf("}\n");
}
