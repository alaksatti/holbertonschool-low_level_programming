#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * Description: Print every minute of the day.
 * Return: nothing.
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
		for (b = 0; b <= 59; b++)
		{
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar(58);
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			_putchar('\n');
		}

}
