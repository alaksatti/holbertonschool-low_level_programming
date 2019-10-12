#include "hash_tables.h"


/**
 * hash_table_create - creates a hashtable.
 * @size: size of hashtable
 * Return: pointer to hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	hash_node_t **head;


	hashtable = calloc(1, sizeof(hash_table_t));

	if (!hashtable)
		return (NULL);


	head = calloc(size, sizeof(hash_node_t *));

	if (!head)
	{
		free(hashtable);
		return (NULL);
	}

	hashtable->size = size;
	hashtable->array = head;


	return (hashtable);
}
