#include "holberton.h"


/**
 * _puts_recursion - prints a string.
 * @s: string to be printed.
 *Return: nothing.
 **/


void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s)
		_puts_recursion(++s);
	else
		_putchar('\n');
}
