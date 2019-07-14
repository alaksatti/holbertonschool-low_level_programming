#include "holberton.h"


/**
 * _memset - fills memory with a contant byte.
 * @s: pointer to char array.
 * @b: value to  fill up memory space.
 * @n: number of bytes to add.
 * Return: pointer to area of memory.
 */



char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i]  = b;




	return (s);
}
