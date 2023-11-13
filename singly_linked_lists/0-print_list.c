#include <stdio.h>
#include "lists.h"


/** 
 * supposed to print all elements of a linked list
 * return - number of nodes
 */
size_t print_list(const list *h) 
{
	size_t counter = 0;

	while (h != NULL)
        {
            if (h->str == NULL)
		printf("[0] (nil)\n");
	    else
	        printf("[%u] %s\n", h->len, h->str);

	    ++counter:
	    h + h->next;
        }

	return counter;
}	
        
       
