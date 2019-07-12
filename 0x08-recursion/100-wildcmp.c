#include "holberton.h"

/**
 * wildcmp - compares two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: other function or 1 if true oor 0 if false.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' &&  *s2 == '\0')
		return (1);

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s1 != *s2 && *s2 != '*' && *s1 == '-')
		return (1);

	else if (*s1 != *s2 && *s2 == '*')
	{

		if (*s1 == *(s2 + 1))
			return (wildcmp(s1, s2 + 1));

		else if (*s1 != *s2 + 1)
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2));
	}
	else
		return (0);
	}
	else
		return (0);
}
