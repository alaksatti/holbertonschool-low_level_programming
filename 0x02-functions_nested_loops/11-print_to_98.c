#include "holberton.h"

/**
 * print_to_98- prints all natural numbers from n to 99 w/ newline.
 * Description: Print natural numbers from n to 99.
 *@n: number to begin sequence of natural numbers.
 * Return: nothing.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	if (n > 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 99)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i > 99)
			{
				_putchar(i / 100 + '0');
				_putchar(i % 100 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}

	}
}
