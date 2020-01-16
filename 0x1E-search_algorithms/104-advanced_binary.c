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
	size_t f = 0, l = size - 1, m = (size - 1) / 2;

	if (!array || !size)
		return (-1);


	return (binary_helper(array, f, l, m, value));


}
/**
 * binary_helper - helper function
 * @f: first index
 * @l: last index
 * @m: middle index
 * @array: pointer to array
 * @value: value to be searched
 * Return: None
 */

int binary_helper(int *array, size_t f, size_t l, size_t m, int value)
{
	print_array(array, f, l);

	if (f == l || f > l)
		return (-1);

	if (array[m] > value)
		return (binary_helper(array, f, m - 1, (f + m - 1) / 2, value));

	else if (array[m] < value)
		return (binary_helper(array, m + 1, l, (m + 1 + l) / 2, value));

	else if (array[m] == value && array[m - 1] == value)
		return (binary_helper(array, f, m, (m) / 2, value));

	else if (array[m] == value && array[m - 1] != value)
		return (m);
	else
		return (-1);

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
