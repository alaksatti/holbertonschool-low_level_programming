#include "holberton.h"


/**
 * print_number - prints an integer.
 * @n:  integer to be printed.
 * Return: nothing.
 */


void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else if (n == 0)
	{
		_putchar('0');;
	}
	else
	{
		m = n;

		if (m / 10)
			print_number(m / 10);
	_putchar(m % 10 + '0');
	}
}
