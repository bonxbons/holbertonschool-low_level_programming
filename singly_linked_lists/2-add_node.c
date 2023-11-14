#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int c = 0;

	while (str[c++])
		;

