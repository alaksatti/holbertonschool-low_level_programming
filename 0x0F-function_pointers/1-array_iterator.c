#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: array passed to function.
 * @size: size of array.
 * @action: function that will be used.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);




}
