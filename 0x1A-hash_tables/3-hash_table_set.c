#include "hash_tables.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Add/update a key/value pair in a hash table
 * @ht: Pointer to the hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 if it succeeds, 0 othewise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *val = NULL;
	hash_node_t *head = NULL, *new_node = NULL;

	if (ht == NULL || is_empty((char *) key) || value == NULL)
		return (0);

	val = malloc(strlen(value) + 1);
	if (val == NULL)
		return (0);
	val = strcpy(val, value);
	if (val == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_node->key = (char *)key;
	new_node->value = val;
	new_node->next = NULL;

	head = ht->array[index];
	insert_node(&head, key, new_node);
	return (1);
}

/**
 * insert_node - Insert a node into a hash_node_t linked list
 * @head: Pointer to pointer of the first node of the list
 * @key: The key value of the newly to be inserted node
 * @new_node: The newly to be inserted node
*/

void insert_node(hash_node_t **head, const char *key, hash_node_t *new_node)
{
	if (*head != NULL)
	{
		hash_node_t *current = *head;
		hash_node_t *prev = current;
		bool key_found = false;

		while (current != NULL)
		{
			key_found = !strcmp(key, current->key);
			if (key_found)
				break;
			prev = current;
			current = current->next;
		}

		if (key_found)
		{
			prev->next = new_node;
			new_node->next = current->next;
			free(current->value);
			free(current);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
	}
	else /* if *head is NULL */
	{
		*head = new_node;
	}
}

/**
 * is_empty - Check if a string is empty or NULL
 * @string: The string to be checked
 *
 * Return: true, if string is empty or NULL, false, otherwise
*/

bool is_empty(char *string)
{
	if (string == NULL || !strcmp(string, ""))
		return (true);
	return (false);
}
