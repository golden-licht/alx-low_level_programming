#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a linked list listint_t
 * @h: Pointer to the head of a listint_t list
 *
 * Return: The number of nodes of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
