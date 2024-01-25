#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list, dlistint_t
 * @head: Pointer to the head of the list
*/
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *past = head;

		head = head->next;
		free(past);
	}
}
