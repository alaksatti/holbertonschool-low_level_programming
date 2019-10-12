#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hashtable
 * @key: key looking for.
 * Return: value associaed with the element.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];

	if (!ptr)
		return (NULL);

	for (; ptr; ptr = ptr->next)
		if (!strcmp(ptr->key, key))
			return (ptr->value);
	return (NULL);
}
