#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the dlistint_t list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *         If it is not possible to add the new node at index idx, do not add
 *         the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int i;

    if (h == NULL)
        return NULL;

    if (idx == 0)
        return add_dnodeint(h, n);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    for (i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(new_node);
            return NULL;
        }
        current = current->next;
    }

    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return new_node;
}
