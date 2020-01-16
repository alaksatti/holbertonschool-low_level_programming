#include "search_algos.h"

/**
 * exponential_search - finds a value in an array using exponential search algo
 * @array:pointer to array
 * @size: size of array
 * @value: int to be found
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, new_size, min;
	int index;

	if (!array)
		return (-1);


	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n",
				(int)bound, array[bound]);
		bound *= 2;
	}

	min = (bound < (size - 1)) ? bound : (size - 1);

	printf("Value found between indexes [%i] and [%i]\n",
			(int)bound / 2, (int)min);
	new_size = ((bound + 1 < size) ? bound : size) - bound / 2;


	index = binary_search(array + bound / 2, new_size, value);

	if (index != -1)
		index += bound / 2;

	return (index);
}





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
