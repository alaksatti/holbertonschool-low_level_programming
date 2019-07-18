#include "holberton.h"
#include <stdlib.h>



/**
 * array_range - creates an array of integers.
 * @min: min value of array.
 * @max: max value of array.
 * Return: pointer to memory space or Null if failed.
 */


int *array_range(int min, int max)
{
	int *arr, v = min;
	unsigned int i, size = 0;



	if (min > max)
		return (NULL);

	size = max - min;


	arr = (int *)malloc(sizeof(int) * (size + 1));

	if (arr)
	{
		for (i = 0; i <= size; ++i, v++)
			arr[i] = v;

	}

	return (arr);



}
