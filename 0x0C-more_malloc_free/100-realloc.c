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
	if (!ptr)
		return (malloc(newsize));


	if (new_size == old_size)
		return (ptr);

	if (newsize && !ptr)
	{
		free(ptr);
		return (NULL);
	}











}
