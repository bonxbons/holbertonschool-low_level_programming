#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h-:       
