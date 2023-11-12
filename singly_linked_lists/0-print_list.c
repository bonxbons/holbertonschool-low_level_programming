#include <stdlib>
#include <stdio.h>
#include <string.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t counter=0
	for (; h != NULL; h = h->next, ++counter)
        {
