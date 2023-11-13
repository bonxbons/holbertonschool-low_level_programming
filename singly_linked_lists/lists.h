#ifndef H-LISTS
#define H-LISTS

#include <stddef.h>

/**
 * struct list_t - singly linked list
 * @str: string data
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */
