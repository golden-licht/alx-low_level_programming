#include "hash_tables.h"

#include <stdbool.h>
#include <stdio.h>
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
	const char *_key;
	char *val = NULL;
	hash_node_t *head = NULL, *new_node = NULL;

	if (ht == NULL || is_empty((char *) key) || value == NULL)
		return (0);

	val = strdup(value);
	_key = strdup(key);
	if (val == NULL || _key == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val);
		return (0);
	}

	index = key_index((const unsigned char *)_key, ht->size);

	new_node->key = (char *)_key;
	new_node->value = val;
	new_node->next = NULL;

	head = ht->array[index];
	insert_node(&head, _key, (void *) new_node);
	ht->array[index] = head;
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
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		hash_node_t *current = *head;
		bool key_found = false;

		while (current != NULL)
		{
			key_found = !strcmp(key, current->key);
			if (key_found)
				break;
			current = current->next;
		}

		if (key_found)
		{
			free(current->value);
			current->value = new_node->value;
			free(new_node);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
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
