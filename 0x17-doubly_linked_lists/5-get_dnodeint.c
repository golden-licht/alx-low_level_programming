#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: The index of the node we are looking
 *
 * Return: The address of the node at index @index, or NULL on failure
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (index == i)
		return (current);

	return (NULL);

}
