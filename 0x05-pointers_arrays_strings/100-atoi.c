#include "holberton.h"
#include <limits.h>


/**
 *_atoi - converts a string to an integer, pulls integer and its sign.
 * @s: string to be evaluated.
 *Return: integer with its sign.
 */



int _atoi(char *s)
{
	int i, negcounter = 0, finalint = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			negcounter++;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			finalint = finalint * 10 + (s[i] - '0');
			if (finalint >= INT_MAX)
				return (INT_MAX);
			if (finalint <= INT_MIN)
				return (INT_MIN);
		}
	}


	if (negcounter % 2 == 0)
		return (finalint);

	else if (negcounter % 2 != 0)
		return (-finalint);
	else
		return (0);
}
