#include "holberton.h"


/**
 * _strchr - locates a character in a string.
 * @s: pointer to a char string that will be evaluated.
 * @c: character to be searched.
 * Return: pointer to first occurence of character.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return ('\0');



}
