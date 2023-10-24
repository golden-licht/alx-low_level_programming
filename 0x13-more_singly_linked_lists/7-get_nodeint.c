#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list
 * @head: Pointer to the head of a listint_t list
 * @index: The index of the node, starting at 0
 *
 * Return: Pointer to @index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
