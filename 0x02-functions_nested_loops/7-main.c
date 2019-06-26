#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(105);
	_putchar('\n');
	print_last_digit(3);
	_putchar('\n');
	r = print_last_digit(-1024);
	_putchar('\n');
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
