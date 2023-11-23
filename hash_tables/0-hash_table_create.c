#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *htable = malloc(sizeof(hash_table_t));

    if (htable == NULL)
    {
        return NULL;
    }

    htable->size = size;

    htable->array = malloc(sizeof(hash_node_t *) * size);
    if (htable->array == NULL)
    {
        free(htable);
        return NULL;
    }

    for (unsigned long int i = 0; i < size; ++i)
    {
        htable->array[i] = NULL;
    }

    return htable;
}

