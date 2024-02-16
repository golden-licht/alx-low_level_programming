#include "hash_tables.h"

#include <string.h>
/**
 * hash_table_get - Retrieve a value associated with a key from a hash table 
 * @ht: The hash table 
 * @key: The key
 * 
 * Return: The value associated with the key, or NULL if key can't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
    hash_node_t *current = NULL;

    if (ht == NULL || is_empty((char *)key))
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}
