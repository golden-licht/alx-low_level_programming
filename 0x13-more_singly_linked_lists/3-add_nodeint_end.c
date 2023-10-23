#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a listint_t
 * @head: Pointer to pointer of the head of the listint_t
 * @n: Value to be set to the first element of the new node
 *
 * Return: Address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (current == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = new_node;

	return (new_node);
}
