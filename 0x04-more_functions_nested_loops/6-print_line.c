#include "holberton.h"

/**
 * print_line - prints a straight line to the terminal.
 * @n: the number of times the _ character is printed.
 * Return: nothing.
 */


void print_line(int n)
{
	int i;

	if (n < 0 || n == 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
