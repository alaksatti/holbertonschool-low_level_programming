#include "hash_tables.h"

/**
 * hash_table_print - prints a hashtable.
 * @ht: hashtable to be printed.
 * Return: nothing.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *ptr;

	if (!ht)
		return;

	printf("{");

	while (index < ht->size && !ht->array[index])
		index++;

	if (index == ht->size)
	{
		printf("}\n");
		return;
	}
	ptr = ht->array[index];

	printf("'%s': '%s'", ptr->key, ptr->value);

	ptr = ptr->next;

	do {
		for (; ptr; ptr = ptr->next)
			printf(", '%s': '%s'", ptr->key, ptr->value);
		index++;

		if (index < ht->size)
			ptr = ht->array[index];
		else
			break;
	} while (1);

	printf("}\n");

}
