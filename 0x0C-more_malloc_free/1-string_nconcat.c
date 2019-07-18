#include "holberton.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes of s2 to copy over.
 * Return: Null if unsuccessful otherwise pointer to memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; ++i)
		;
	for (j = 0; s2[j] != '\0'; ++j)
		;

	if (n > j)
		p = j;

	else
		p = n;

	arr = (char *)malloc(sizeof(char) * (i + p + 1));

	if (arr)
	{

		if (s1)
			for (i = 0; s1[i] != '\0'; i++)
				arr[i] = s1[i];

		if (s2)
			for (j = 0; j < p; j++, i++)
				arr[i] = s2[j];
		arr[i] = '\0';
	}

	return (arr);
}
