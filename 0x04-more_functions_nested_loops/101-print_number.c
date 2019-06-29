#include "holberton.h"
#include <stdio.h>

/**
 * print_number - prints integers.
 * @n: number to be checked
 * Return: nothing
 */


void print_number(int n)
{
	int r;
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		m = n;

	if (m > 0)
	{
		r = m % 10;
		if (m / 10 > 0)
			print_number(m / 10);
		_putchar(r + '0');
	}
}
