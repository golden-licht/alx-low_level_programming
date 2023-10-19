#include "lists.h"

/**
 * free_list - Free a list_t list
 * @head: Pointer to the first node of the list to be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp;

		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
