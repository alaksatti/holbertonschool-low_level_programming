#include "holberton.h"

/**
 * print_most_numbers - prints numbers except for 2 and 4.
 * Return: nothing.
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i != 2 && i != 4 && i <= 9)
	{
		_putchar(i + '0');
		i++;
	}

	putchar('\n');
}
