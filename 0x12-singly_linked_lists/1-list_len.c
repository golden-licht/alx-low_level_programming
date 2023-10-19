#include "lists.h"

/**
 * list_len - Return the number of nodes in a linked list_t list
 * @h: Pointer to to the linked list
 *
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	do {
		h = h->next;
		count++;
	} while (h != NULL);

	return (count);
}
