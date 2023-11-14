#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a singly linked list.
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
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

