#include "holberton.h"

/**
 * _isalpha- checks if a character is a letter.
 * Description: Checks if the character is a letter.
 * @c: the int to be checked.
 * Return: 1 if c is a letter; otherwise return 0.
 */

int _isalpha(int c)
{
	int c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
