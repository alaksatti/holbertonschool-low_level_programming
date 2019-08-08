#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: bit to be evaluated.
 * @index: index of bit/
 * Return: 1 if worked or -1 if not.
 */


int set_bit(unsigned long int *n, unsigned int index)
{

	if (index < sizeof(*n) * 8)
		*n  = *n | 1 << index;

	else
		return (-1);

	return (1);






}
