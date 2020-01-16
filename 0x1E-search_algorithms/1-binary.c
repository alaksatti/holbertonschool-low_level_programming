#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 * @array: pointer to the array of int
 * @size: size of array
 * @value:  value to be found
 * Return: the index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t f = 0, l = size - 1, m = (size - 1) / 2;

	if (!array)
		return (-1);

	while (f <= l)
	{
		print_array(array, f, l);

		if (array[m] == value)
			return (m);

		else if (array[m] > value)
			l = m - 1;

		else
			f = m + 1;

		m = (f + l) / 2;

	}


	return (-1);

}
/**
 * print_array - prints array
 * @array: pointer to array
 * @f: first index of array
 * @l: last index of array
 * Return: None.
 */
void print_array(int *array, size_t f, size_t l)
{
	size_t i;

	printf("Searching in array: ");

	for (i = f; i <= l; i++)
	{
		printf("%i", array[(int)i]);

		if (i != (l))
			printf(", ");
	}

	putchar('\n');


}
