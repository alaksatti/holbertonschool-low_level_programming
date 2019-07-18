#include "holberton.h"
#include <stdlib.h>



/**
 * malloc_checked - allocates memory using malloc.
 * @b: in for which memory is to be allocated.
 * Return: pointer to memory location, otherwise 98.
 */



void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);

}
