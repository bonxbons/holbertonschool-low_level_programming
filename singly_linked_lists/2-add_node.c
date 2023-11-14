#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int c = 0;

	while (str[c++])
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = --c;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
