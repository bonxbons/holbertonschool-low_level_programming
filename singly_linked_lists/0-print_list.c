#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a linked list.
 * @h: a linked list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

<<<<<<< HEAD
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h-:       
=======
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		++counter;
		h = h->next;
	}

	return (counter);
}
>>>>>>> f27bc5cec3889be1bd232fafa88413d3f4aaff19
