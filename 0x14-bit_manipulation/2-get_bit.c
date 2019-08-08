#include "holberton.h"


/**
 * get_bit -returns the value of a bit at a given index.
 * @n: number to be evaluated.
 * @index: index of desired bit
 * Return: bit at given index or -1 if error.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count, num = n;


	for (num = 0; num != 0; num /= 10)
	{
		++count;
	}

	if (index >= n)
		return (-1);


	return ((n >> index) & 1);
}
