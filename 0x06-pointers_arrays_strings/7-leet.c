#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string to be evaluated.
 * Return: the array.
 */

char *leet(char *s)
{
	char lett[] = "AEOTLaeotl";
	char num[] = "4307143071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; lett[j] != '\0'; j++)
			if (s[i] == lett[j])
				s[i] = num[j];




	return (s);
}
