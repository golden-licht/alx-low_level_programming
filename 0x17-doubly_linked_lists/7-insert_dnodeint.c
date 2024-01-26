#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a node to a dlistint_t at a specified index
 * @h: Pointer to pointer of the head of the list
 * @idx: The idx we want our new node to be inserted
 * @n: The value to our new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (current && i < idx)
	{
		current = current->next;
		i++;
	}

	if (i == idx)
	{
		if (current == NULL)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}

		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		(current->prev)->next = new_node;
		new_node->prev = current->prev;
		new_node->next = current;
		current->prev = new_node;

		return (new_node);
	}

	return (NULL);
}
