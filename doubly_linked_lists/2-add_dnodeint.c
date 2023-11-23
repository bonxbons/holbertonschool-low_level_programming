#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the linked list
 * @n: the integer for the new node to contain
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->prev = NULL;
	add_node->next = *head;
	if (*head != NULL)
		(*head)->prev = add_node;
	*head = add_node;

	return (add_node);
      }	
