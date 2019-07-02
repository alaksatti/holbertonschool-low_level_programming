#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 * Return: nothing.
 */

void rev_string(char *s)
{

	int i, count = -1;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0; i <= count; i++)
	{
		tmp = s[i];
		s[i] = s[count];
		s[count] = tmp;
		count--;
	}


}
