#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 * @size: size of triangle.
 *Return: nothing.
 */


void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = size; i >= 1; i--)
	{
		for (j = 1; j <= i; ++j)
		{
			_putchar(' ');
		}
		for (k = size; k >= i; k--)
			_putchar(35);
		_putchar('\n');
	}
}
