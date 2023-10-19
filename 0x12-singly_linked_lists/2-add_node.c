#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list
 * @head: Pointer to pointer of the first node
 * @str: The string to be stored in the new node
 *
 * Return: Pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
