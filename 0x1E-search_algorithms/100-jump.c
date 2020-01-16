#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value using jump search
 * @array: pointert to array
 * @value:  value to be searched.
 * @size: size of array
 * Return: index or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt((int)size), pos, f = 0;

	if (!array || size == 0)
		return (-1);

	pos = f + jump;

	while (f < (int)size && array[f] < value)
	{
		printf("Value checked array[%i] = [%i]\n", f, array[f]);
		f = pos;
		pos = f + jump;
	}

	f = f - jump;

	printf("Value found between indexes [%i] and [%i]\n",
	       f, pos - jump);


	for (; f < (int)size && array[f] <= value; f++)
	{
		printf("Value checked array[%i] = [%i]\n", f, array[f]);
		if (array[f] == value)
			return (f);
	}

	return (-1);
}
