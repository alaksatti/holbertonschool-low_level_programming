#include "holberton.h"

/**
 * binary_to_uint - converts binary to an unsigned int.
 * @b: string of 0s and 1 chars.
 * Return: converted number.
 */


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n = n * 2 + b[i] - '0';
	}

	return (n);

}
