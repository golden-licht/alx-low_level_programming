#include "lists.h"

/**
 * sum_dlistint - Find the sum of elements of a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of the elements
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
