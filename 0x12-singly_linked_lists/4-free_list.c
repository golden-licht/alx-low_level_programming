#include "lists.h"

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
