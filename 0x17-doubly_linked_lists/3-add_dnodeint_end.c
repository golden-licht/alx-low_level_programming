#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a dlistint_t doubly linked list
 * @head: Pointer to the head of the list
 * @n: The value of the newly to be added node
 *
 * Return: Pointer to the newly added node, or NULL on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	current = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
