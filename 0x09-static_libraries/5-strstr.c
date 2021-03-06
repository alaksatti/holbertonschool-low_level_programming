#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched..
 * @needle: string to be located.
 * Return: Pointer to beginning of located substring.
 */

char *_strstr(char *haystack, char *needle)
{

	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] == needle[j]; j++)
			;
		if (!needle[j])
			return (haystack);
	}
	return (0);
}
