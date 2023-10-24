#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to pointer of the head node
 * @idx: The index of the list where the new node should be added
 * @n: The data value(n) of the new node to be inserted
 *
 * Return: The address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current, *before;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current = *head;
	while (current && i < idx)
	{
		before = current;
		current = current->next;
		i++;
	}

	if (i == idx)
	{
		before->next = new_node;
		new_node->next = current;

		return (new_node);
	}

	free(new_node);
	return (NULL);
}
