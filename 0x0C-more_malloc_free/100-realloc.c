#include "holberton.h"
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to old memory block.
 * @old_size: size in bytes for old memory block.
 * @new_size: size of bytes of new memory block.
 * Return: pte to new memory block or Null if failed.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	nptr = malloc(sizeof(char) * new_size);


	if (nptr == NULL)
	{
		free(nptr);
		return (NULL);
	}


	if (new_size > old_size)
		_memcpy(nptr, ptr, old_size);
	else
		_memcpy(nptr, ptr, new_size);

	free(ptr);

	return (nptr);

}

/**
 * _memcpy - copies n bytes from one area in memory to another.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes to be copied.
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
