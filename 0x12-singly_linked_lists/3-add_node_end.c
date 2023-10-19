#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: Pointer to pointer of the first node
 * @str: The string to be stored in the new node
 *
 * Return: Pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;
	size_t len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	len = (str == NULL) ? 0 : strlen(str);
	s = strdup(str);
	new_node->str = s;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *temp;

		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
