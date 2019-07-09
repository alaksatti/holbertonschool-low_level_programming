#include "holberton.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to character array.
 * @b: value to be put in.
 * @n: number to bytes to be added.
 * Return: pointer to array.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		printf("%c", s[i]);
	}
	return (s);
}
