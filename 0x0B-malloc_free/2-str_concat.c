#include <stdlib.h>

/**
 * str_concat - concatenates s1 and s2.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer if succesful, null if not
 */


char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j;

	for (i = 0, j = 0; s1[i] != '\0', s2[j] != '\0'; ++i, ++j)
		;

	arr = (char *)malloc(sizeof(char) * i + j + 1);

	if (arr)
	{
		if (s1)
			for (i = 0; s1[i] != '\0'; i++)
				arr[i] = s1[i];
		if (s2)
		{
			j = 0;

			for (; s2[j] != '\0'; ++i, ++j)
				arr[i] = s2[j];
		}
		arr[i] = '\0';
	}
	return (arr);
}