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
	int *arr, j
	unsigned int i, size;



	if (min > max)
		return (NULL);

	size = max - min;


	arr = (int *)malloc(sizeof(int) * (size + 1));

	if (arr)
	{
		for (i = 0; i < size; i++)
			for (j = min; j <= max; j++)
				arr[i] = j;


	}

	return (arr);



}
