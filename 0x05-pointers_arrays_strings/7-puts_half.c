#include "holberton.h"

/**
 * puts_half - prints the second half of a string.
 * @str: string to be evaluated.
 * Return: nothing;
 */



void puts_half(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	if (count % 2  == 0)
		for (i = (count) / 2; i <= count; ++i)
			     _putchar(str[i]);
     	else
		for (i = ((count + 1) / 2); i <= count; ++i)
			_putchar(str[i]);
	_putchar('\n');
}
