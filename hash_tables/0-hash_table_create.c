#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurred.
 */
hash_table_t *htable = malloc(sizeof(hash_table_t));

    if (!htable)
        return NULL;

    htable->size = size;
    htable->array = malloc(sizeof(hash_node_t *) * size);

    if (!htable->array)
    {
        free(htable);
        return NULL;
    }

    for (unsigned long int i = 0; i < size; ++i)
        htable->array[i] = NULL;

    return htable;
}
