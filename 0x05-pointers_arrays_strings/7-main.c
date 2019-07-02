#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str, *lo, *rem, *less;

	str = "Hello";
	puts_half(str);
	less = "0123456789";
	puts_half(less);
	rem = "123456789";
	puts_half(rem);
	lo = "bell";
	puts_half(lo);
	return (0);
}
