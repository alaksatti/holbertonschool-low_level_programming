#include "holberton.h"


/**
 *_strncat - concatenates two strings up to a certain number of bytes.
 * @dest - the string that will be appended.
 * @src - the string that will be concatenated to dest.
 * Resturn: pointer to dest.
 */


char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
