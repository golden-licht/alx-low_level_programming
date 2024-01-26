#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
	}
	else
	{
		dlistint_t *current = *h;
		dlistint_t *prev = *h;
		unsigned int i = 0;

		while (current && i < idx)
		{
			prev = current;
			current = current->next;
			i++;
		}
		if (current == NULL && i == idx)
		{
			new_node->next = NULL;
			new_node->prev = prev;
			new_node->n = n;
			prev->next = new_node;
		}
		else if (i == idx)
		{
			new_node->next = current;
			new_node->prev = prev;
			new_node->n = n;
			prev->next = new_node;
			current->prev = new_node;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}

	return (new_node);
}