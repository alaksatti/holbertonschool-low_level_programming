#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: array to be evaluated.
 * @n: is the number of elements in the array to be printed.
 * Return: nothing.
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
