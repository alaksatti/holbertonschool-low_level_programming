#include "holberton.h"

/**
 * find_sqr - circles through numbers to find the sqr of n.
 * @i: int testing.
 * @n: square searching for.
 * Return: sqrt of n.
 */

int find_sqr(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_sqr(++i, n));
}




/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be evaluated.
 * Return: sqrt.
 */


int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (find_sqr(1, n));


}
