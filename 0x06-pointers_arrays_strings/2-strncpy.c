#include "holberton.h"

/**
 * _strncpy - copies a string.
 * @dest: buffer to which string will be copied into.
 * @src: string to be copied.
 * @n: Number of characters to copy.
 * Return: pointer to dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';




	return (dest);
}
