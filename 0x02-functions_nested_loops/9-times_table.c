#include "holberton.h"

/**
 * times_table - prints 9 times table
 * Description: Prints the 9 times table.
 * Return: nothing.
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = ((i * j));
			if (p <= 9 && j != 9)
			{
				_putchar(' ');
				_putchar(p + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (p > 9 && j != 9)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (p > 9 && j == 9)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			if (p <= 9 && j == 9)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}
