#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print all the elements of a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: The number of nodes of the doubly linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
