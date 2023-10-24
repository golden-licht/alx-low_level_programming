#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Pointer to pointer of the listint_t
 *
 * Return: The head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
