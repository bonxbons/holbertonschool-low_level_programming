#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a singly linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tmp_node; /* Create a temporary node */

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node->str);
		free(tmp_node);
	}
}

