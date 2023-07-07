#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - sets a new entry in a hash table
 *
 * @ht: the target hash table
 * @key: the key of the entry
 * @value: the value of the entry
 *
 * Return: 1 (success), 0 (failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **node;
	unsigned long index;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = &ht->array[index];

	while ((*node) != NULL && strcmp(key, (*node)->key) != 0)
		node = &(*node)->next;

	if (*node)
	{
		if (strlen(value) > strlen((*node)->value))
		{
			free((*node)->value);
			(*node)->value = malloc(strlen(value) + 1);
			if (!(*node)->value)
				return (0);
		}
		strcpy((*node)->value, value);
		return (1);
	}

	*node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	(*node)->key = (char *)key;
	(*node)->value = malloc(strlen(value) + 1);
	if (!(*node)->value)
	{
		free(*node);
		return (0);
	}
	strcpy((*node)->value, value);
	(*node)->next = NULL;

	return (1);
}
