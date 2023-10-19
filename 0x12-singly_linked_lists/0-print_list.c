#include "lists.h"

/**
 * print_list - Print the str element of a list_t list and it's length
 * @h: Pointer to the list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (-1);
	}

	do {
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	} while (h != NULL);

	return (count);
}
