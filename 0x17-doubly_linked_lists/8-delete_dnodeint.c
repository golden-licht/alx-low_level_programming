#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at an index from a dlistint_t list
 * @head: Pointer to pointer of the dlistint_t list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
		return (delete_node_start(head));

	while (current->next && i < index)
	{
		current = current->next;
		i++;
	}

	if (i == index)
	{
		dlistint_t *prev = current->prev;

		if (current->next == NULL)
			return (delete_node_end(head));

		prev->next = current->next;
		(current->next)->prev = prev;

		free(current);
		return (1);
	}

	return (-1);
}

/**
 * delete_node_start - Deletes the first node of a doubly linked list
 * @head: Pointer to pointer of the head of the list
 *
 * Return: 1 on success, -1 on failure
 */

int delete_node_start(dlistint_t **head)
{
	dlistint_t *new_head;

	if (*head == NULL)
		return (-1);

	new_head = (*head)->next;
	if (new_head != NULL)
		new_head->prev = NULL;

	free(*head);
	*head = new_head;

	return (1);
}

/**
 * delete_node_end - Deletes the last node of a doubly linked list
 * @head: Pointer to pointer of the head of the list
 *
 * Return: 1 on success, -1 on failure
 */

int delete_node_end(dlistint_t **head)
{
	dlistint_t *current = *head;
	dlistint_t *prev;

	if (*head == NULL)
		return (-1);

	while (current->next)
		current = current->next;

	prev = current->prev;
	if (prev == NULL)
		return (delete_node_start(head));

	prev->next = NULL;
	free(current);

	return (1);
}
