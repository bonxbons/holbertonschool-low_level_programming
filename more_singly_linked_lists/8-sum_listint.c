#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - find the sum of all the data in a linked list.
 * @head: a linked list to print
 *
 * Return: the sum of all data, 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    if (head == NULL)
        return (0);

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}

