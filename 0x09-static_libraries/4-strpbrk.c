#include "holberton.h"


/**
 * _strpbrk - seaches a string for a subset of bytes.
 * @s: pointer to string.
 * @accept: pointer to substring.
 * Return: string that matches byte.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				return (s + i);

	if (s[i] == '\0' || accept[j] == '\0')
		return ('\0');

	return ('\0');
}
