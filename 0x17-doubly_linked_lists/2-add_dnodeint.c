#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list
 * @head: The head of the dlistint_t list
 * @n: The element to be stored in the new node
 * Return: A pointer to the newly created node, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	current = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
	}
	else
	{
		while (current->next)
			current = current->next;
		new_node->prev = current;
	}

	*head = new_node;

	return (new_node);
}
