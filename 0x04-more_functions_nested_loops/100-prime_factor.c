#include <stdio.h>
#include "holberton.h"


/**
 * main - prints prime numbers for 1231952.
 * Return: nothing.
 */



int main(void)
{
	long int largest = 0, i;

	for (i = 1; i <= 612852475143; i++)
		if (612852475143 % i == 0 && i % 2 != 0)
			largest = i;
	printf("%l\n", largest);
	return (0);
}
