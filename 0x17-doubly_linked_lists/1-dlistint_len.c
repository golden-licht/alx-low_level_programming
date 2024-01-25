#include "lists.h"

/**
 * dlistint_len - Determine the length of a dlistint_t doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
