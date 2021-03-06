#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a:2D integer array.
 * @size: size of array.
 * Return: sum;
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size * size; i = i + size + 1)
		sum += a[i];
	for (i = (size * size - size); i > 0; i -= (size - 1))
		sum2 += a[i];

	printf("%i, %i\n", sum, sum2);

}
