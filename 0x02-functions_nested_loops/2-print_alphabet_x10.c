#include "holberton.h"


/**
 *print_alphabet_x10- prints lowercase character 10x.
 *Description: print alphabet using _putchar.
 *Return: nothing.
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}

}
