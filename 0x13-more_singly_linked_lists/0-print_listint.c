#include "lists.h"

/**
 * print_listint - Print elements of a listint_t list
 * @h: The head of the list listint_t
 *
 * Return: The number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h->next == NULL)
		return (0);
	do {
		printf("%d\n", h->n);
		count++;
		h = h->next;
	} while (h != NULL);

	return (count);
}
