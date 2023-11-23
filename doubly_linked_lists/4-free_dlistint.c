#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Description: Frees all nodes of a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first, *next;

	if (!head)
		return;

	first = head;
	while (first)
	{
		next = first->next;
		free(first);
		first = next;
	}
}

