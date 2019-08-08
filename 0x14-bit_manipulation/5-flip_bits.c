#include "holberton.h"


/**
 * flip_bits - returns the number of bits needed to flip to get another number.
 * @n: unsigned int to be evaluated.
 * @m: new number.
 * Return: Number of bits neededd to be flipped.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int neededflips = n ^ m, numflips = 0;

	while (neededflips)
	{

		if (neededflips & 1)
			numflips++;

		neededflips >>= 1;

	}



	return (numflips);

}
