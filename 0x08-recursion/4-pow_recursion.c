#include "holberton.h"

/**
 * _pow_recursion -  Returns the value of x raised to the power y.
 * @x: base.
 * @y: exponent.
 * Return: x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y)
	{
		return (x * _pow_recursion(x, --y));
	}
	else
		return (1);


}
