#include "hash_tables.h"

/**
 * key_index - gives the index of an array.
 * @key: key
 * @size: size of array
 * Return: index of value.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
