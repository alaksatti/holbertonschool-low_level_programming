#include "holberton.h"

/**
 * _memcpy - copies a certain number of bytes from one mem area to another.
 * @dest: area to which memory will be copied into.
 * @src: area that will be copied.
 * @n: number of bytes to be copied.
 * Return: pointer to area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';


	return (dest);
}
