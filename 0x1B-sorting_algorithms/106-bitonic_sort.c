#include "sort.h"


/**
 * bitonic_sort - sorts accoridn got bitonic algorithm
 * @size: size of array
 * @array:array.
 * Return: nothing
 */
void bitonic_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	bitonic_recursive(array, size, size, 0, 1);
}

/**
 * bitonic_recursive - recursively sorts.
 * @array: array
 * @size: size
 * @low: low number
 * @dir: direction 1 for up 0 for down
 * @now: current number of elements
 * Return: nothing
 */
void bitonic_recursive(int *array, size_t now, size_t size, int low, int dir)
{
	int i;

	if (now > 1)
	{
		printf("Merging [%lu/%lu] (", (unsigned long) now,
		       (unsigned long) size);
		if (dir)
			printf("UP):\n");
		else
			printf("DOWN):\n");
		print_array(array, now);

		i = now / 2;
		bitonic_recursive(array, i, size, low, 1);
		bitonic_recursive(array + i, i, size, low, 0);
		bitonic_merge(array, now, size, low, dir);

		printf("Result [%lu/%lu] (", (unsigned long) now,
		       (unsigned long) size);
		if (dir)
			printf("UP):\n");
		else
			printf("DOWN):\n");
		print_array(array, now);
	}
}
/**
 * bitonic_merge - Merge arrays using Bitonic sort algorithm
 * @array: The array of integers
 * @now: The current number of elements
 * @size: The total number of elements
 * @low: low number
 * @dir: The direction (1 for up, 0 for down)
 * Return: none
 */
void bitonic_merge(int *array, size_t now, size_t size, int low, int dir)
{
	int i, j, temp;

	if (size < 2)
		return;

	if (now > 1)
	{
		i = now / 2;
		for (j = low; j < low + i; j++)
		{
			if (dir == (array[j] > array[i + j]))
			{
				temp = array[j];
				array[j] = array[i + j];
				array[i + j] = temp;
			}
		}
		bitonic_merge(array, i, size, low, dir);
		bitonic_merge(array + i, i, size, low, dir);
	}
}
