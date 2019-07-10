#include "holberton.h"

/**
 * _stlrn_recursion - prints length of a string.
 * @s: pointer to string.
 * Return: int;
 */

int _strlen_recursion(char *s)
{

	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}

	else
		return (0);
}
