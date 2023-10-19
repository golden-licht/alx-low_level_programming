#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	s = strdup(str);
	new_node->str = s;
	new_node->len = strlen(s);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
