#include "search_algos.h"

/**
 * linear_search - searches for a value using linear search.
 * @array: pointer to array of int
 * @size: size of array
 * @value: value to e found.
 * Return: index, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
