#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: string to be encoded.
 * Return: Pointer to string.
 */

char *rot13(char *s)
{
	int i, j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char inv[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = inv[j];
				break;
			}
		}
	return (s);
}
