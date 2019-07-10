#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched..
 * @needle: string to be located.
 * Return: Pointer to beginning of located substring.
 */

char *_strstr(char *haystack, char *needle)
{

	int i, j, k, count, start;

	for (count = 0; needle[count] != '\0'; count++)
		;



	for (i = 0; haystack[i] != '\0'; i++)
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				start = i;

				for (k = 0; k < count; k++)
				{
					if (haystack[i++] == needle[j++])
						continue;
					else
						break;
				}
			}
		}

	if (haystack[i] == needle[j])
		return (haystack + start);
	if (haystack[i] != needle[j])
		return ('\0');
	return ('\0');



}
