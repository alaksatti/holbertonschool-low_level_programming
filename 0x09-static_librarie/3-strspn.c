#include "holberton.h"

/**
 * _strspn - gets the length of a prefeix substring.
 * @s:string the number of bytes will be counted.
 * @accept: prefix sting.
 * Return: count.
 */


unsigned int _strspn(char *s, char *accept)

{
	int i, j, count = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; ++i)
		for (j = 0; accept[j] != '\0'; ++j)
			if (accept[j] == s[i])
				count++;
	return (count);
}
