#include "holberton.h"

/**
 * print_diagonal - draws a diagnonal line on terminal.
 * @n:  the number of times \ character is printed.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	if (n >= 2)
	{
		_putchar('\\');
		_putchar('\n');

		for (i = 2; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
