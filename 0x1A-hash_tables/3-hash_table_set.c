#include "hash_tables.h"


/**
 * hash_table_set - adds an element to a hash table.
 * @ht: hash_table.
 * @key: key
 * @value: value.
 * Return: 1 if successful 0 if not.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node, *ptr;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr)
		for (; ptr; ptr = ptr->next)
			if (!strcmp(ptr->key, (char *)key))
			{
				free(ptr->value);
				ptr->value = strdup(value);
				return (1);
			}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

}
