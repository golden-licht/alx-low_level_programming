#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to pointer of the head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
	}

	*head = NULL;
}
