#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to char string to be evaluated.
 * Return: string length.
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
