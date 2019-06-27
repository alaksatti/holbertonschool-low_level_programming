#include "holberton.h"

/**
 * print_diagonal - draws a diagnonal line on terminal.
 * @n:  the number of times \ character is printed.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; ++n)
	{
		_putchar('\\');
		_putchar('\n');
	}



}
