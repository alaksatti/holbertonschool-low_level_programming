#include "holberton.h"



/**
 * _strcat - function that will concatenate two strings.
 * @dest - the string to which the next string will be concatenated to.
 * @src - the string that will be concatenated to the string dest.
 * Return: Pointer to dest.
 */


char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);






}
