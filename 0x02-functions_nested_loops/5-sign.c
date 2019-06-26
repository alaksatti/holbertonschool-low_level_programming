#include "holberton.h"

/**
 *print_sign- checks for lowercase character.
 * @n: the number to be checked.
 * Return: 1 if n > 0. 0 if n = 0 letter; -1 if n<0.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0' + n);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
