#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * Description: Checks c for lowecase.
 *@c: the character to be checked.
 * Return: 1 if c is a lowercase letter; otherwise return 0.
 */

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
