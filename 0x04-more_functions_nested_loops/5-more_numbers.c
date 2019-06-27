#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers 0 - 14/
 * Return: nothin.
 */

void more_numbers(void)
{
	int i;
	for (i = 1; i <= 10; i++)
		for (j = 0; j <= 14; j++)
	{
		if (j <= 9)
			_putchar(i + '0');
		else if (i > 9 && != 14)
		{
			_putchar( i / 10 + '0');
			_putchar( i % 10 + '0');
		}
	}
}
