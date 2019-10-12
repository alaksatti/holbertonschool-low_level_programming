#include "hash_tables.h"

/**
 * hash_table_delete - deletes hashtable.
 * @ht: hashtable to be deleted.
 * Return: nothing.
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *prev;
	unsigned long int index = 0;


	for (; index < ht->size; index++)
	{
		ptr = ht->array[index];
		while (ptr)
		{
			prev = ptr;
			ptr = ptr->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
