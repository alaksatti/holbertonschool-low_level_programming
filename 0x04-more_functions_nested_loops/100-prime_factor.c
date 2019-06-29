#include <stdio.h>
#include "holberton.h"


/**
 * main - prints prime numbers for 1231952.
 * Return: nothing.
 */



int main(void)
{
	int largest, i;

	for (i = 0; i <= 1231952; i++)
		if (1231952  % i == 0 && i % 2 != 0)
			largest = i;
	printf("%i", largest);
	return (0);
}
