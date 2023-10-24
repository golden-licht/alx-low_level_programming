#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at index @index
 * @head: Pointer to the pointer of the listint_t list
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *before;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
		return (1);
	}

	current = *head;
	while (current && i < index)
	{
		before = current;
		current = current->next;
		i++;
	}

	if (i == index)
	{
		before->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}
