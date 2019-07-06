#include "holberton.h"


/**
 * string_toupper - changes all lowercase letters in a string to uppercase.
 * @s: string to be changed.
 * Return: lowercase string.
 */


char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i]  = (s[i] - 32);
	return (s);


}
