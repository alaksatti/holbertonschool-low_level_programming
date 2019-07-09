#include "holberton.h"


/**
 * _strchr - locates a character in a string.
 * @s: pointer to string.
 * @c: character to be searched/
 * Return: Pointer to string.
 */

char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
			return(s[i]);
	}

	if (s[i] == '\0')
		return('\0');

	return ('\0');



}
