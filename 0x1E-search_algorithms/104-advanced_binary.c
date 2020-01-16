#include "search_algos.h"

/**
 * advanced_binary - searches for a value using binary search
 * @array: pointer to the array of int
 * @size: size of array
 * @value:  value to be found
 * Return: the index of value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t f = 0, l = size - 1;

	if (!array || !size)
		return (-1);


	return (binary_helper(array, f, l, value));


}
/**
 * binary_helper - helper function
 * @f: first index
 * @l: last index
 * @array: pointer to array
 * @value: value to be searched
 * Return: None
 */

int binary_helper(int *array, size_t f, size_t l, int value)
{
	size_t m = (f + l) / 2;

	if (f > l)
		return (-1);

	print_array(array, f, l);

	if (array[m] > value)
		return (binary_helper(array, f, m, value));

	else if (array[m] < value)
		return (binary_helper(array, m + 1, l, value));

	else if (array[m] == value && array[m - 1] == value)
		return (binary_helper(array, f, m, value));

	else
		return (m);

}
/**
 * print_array - prints array
 * @f: first index
 * @l: last index
 * @array: pointer to array
 * Return: None
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
