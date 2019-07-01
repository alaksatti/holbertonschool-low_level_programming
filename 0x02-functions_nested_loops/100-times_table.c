#include "holberton.h"

/**
 * print_times_table - prints time table of any number between 0 and 15.
 * Return: nothing
 */

void print_times_table(int n)
{
	int p, i, j;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; ++i)
		{
			_putchar('0');
			for (j = 0; j <= n; ++j)
			{
				p = i * j;

				if (p < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
					_putchar(',');
				}
				else if (p >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
					_putchar(',');
				}
				else (p >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(p / 100 + '0');
					_putchar((p / 100) % 10 + '0');
					_putchar(p % 10 + '0');
				}
			}
		}
	else
		return;
}
