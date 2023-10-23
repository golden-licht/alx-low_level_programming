#include "lists.h"

/**
 * free_listint - Frees memory used by listint_t list
 * @head: Pointer to the head node of the list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
