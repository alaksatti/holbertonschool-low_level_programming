#include "holberton.h"


/**
 * _abs - Compute the absolute value of an integer.
 * Description: Compute the absolute value of n.
 *@r: int to be checked.
 * Return: the absolute value.
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (-r);
}
