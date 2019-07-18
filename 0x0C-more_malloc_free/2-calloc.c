#include "holberton.h"
#include <stdlib.h>



/**
 * _calloc - allocates memory for an array.
 * @nmemb: elements in array.
 * @size: bytes of each element/
 * Return: pointer to memory, otherwise return NULL.
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr)
	{
		for (i = 0; i < (nmemb * size); i++)
			ptr[i] = 0;
	}

	return (ptr);

}
