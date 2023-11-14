#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the head node of a singly linked list.
 * @head: a linked list to print
 *
 * Return: the value of the removed element, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *tmp_node; /* Create a new node */
    int value = 0;

    if (*head == NULL)
        return (0);

    tmp_node = *head;
    *head = tmp_node->next;
    value = tmp_node->n;
    free(tmp_node);

    return (value);
}

