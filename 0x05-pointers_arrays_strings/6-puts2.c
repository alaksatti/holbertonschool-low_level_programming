#include "holberton.h"


/**
 * puts2 - prints one char out of 2 of a string, followed by a new line.
 * @str: string to be evaluated.
 * Return: nothing.
 */


void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);

	_putchar('\n');


}