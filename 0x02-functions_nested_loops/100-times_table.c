#include "holberton.h"

/**
 * print_times_table - prints the times table of value n up to 15.
 * @n: value of times table.
 * Return: 0 upon successful completion.
 */

void print_times_table(int n)
{
	int i, j, p;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; ++i)
		for (j = 0; j <= n; ++j)
		{
			p = i * j;

			if (j == 0)
				_putchar('0');
			else if (p > 9 && p < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else if (p >= 100)
			{
				_putchar(' ');
				_putchar(p / 100 + '0');
				_putchar((p / 10) % 10 + '0');
				_putchar(p % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			if (!(j == n))
				_putchar(',');
			else
				_putchar('\n');
		}
}
