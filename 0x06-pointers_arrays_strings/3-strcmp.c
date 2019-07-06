#include "holberton.h"

/**
 * _strcmp - compares two string.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 * Return: comparison.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;


		if (sl[i] == s2[i])
			return (0);

		else if (s1 > s2)
			return (s1 - s2);
		else
			return (s2 - s1);


}
