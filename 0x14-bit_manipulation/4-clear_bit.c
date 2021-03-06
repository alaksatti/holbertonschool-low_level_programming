#include "holberton.h"


/**
 * clear_bit - sets the value of a  bit to 0 at an index.
 * @n: number to be evaluated
 * @index: index of bit want to set.
 * Return: 1 if successful, -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
