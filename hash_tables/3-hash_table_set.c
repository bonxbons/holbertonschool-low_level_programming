#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (must be duplicated, can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *current_node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return 0;

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return 0;
			return 1;
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return 0;
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return 0;
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}

