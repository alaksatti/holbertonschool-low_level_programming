#include "holberton.h"

/**
 * _strcpy - copies string from one array into another.
 * @dest: buffer to which the string will be copied into.
 * @src: the string to be copied/
 * Return: The buffer to which the string was copied into.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);


}
