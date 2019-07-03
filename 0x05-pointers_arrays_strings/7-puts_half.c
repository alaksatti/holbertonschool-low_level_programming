#include "holberton.h"

/**
 * puts_half - prints the second half of a string.
 * @str: string to be evaluated.
 * Return: nothing;
 */



void puts_half(char *str)
{
	int i, count = 0, n;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	if (count % 2  == 0)
		for (n = count / 2; n < count; ++n)
			_putchar(str[n]);
	else if (count % 2 != 0)
		for (n = ((count + 1) / 2); n < count; ++n)
			_putchar(str[n]);
	_putchar('\n');
}
