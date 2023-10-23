#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of the list
 * @head: Pointer to pointer of the current head node
 * @n: Value to be set to the first element of the new node
 *
 * Return: The address of the new node, or NULL, if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
