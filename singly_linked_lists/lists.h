#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* Include for size_t */

/* Define the structure for a linked list node */
typedef struct list_t {
    char *str;               /* Assuming str is a string (adjust data type as needed) */
    unsigned int len;        /* Assuming len is the length of the string */
    struct list_t *next;
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

