#include "holberton.h"

/**
 * print_diagonal - draws a diagnonal line on terminal.
 * @n:  the number of times \ character is printed.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
