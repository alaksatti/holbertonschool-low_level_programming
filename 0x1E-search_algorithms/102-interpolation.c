#include "search_algos.h"


/**
 * interpolation_search - searches for a value using interpolation algo
 * @array: pointer to array
 * @size: size of the array
 * @value: value to be searched
 * Return: index or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, s = 0, e = size - 1;

	if (!array || !size)
		return (-1);

	while (s <= e && (int)e >= array[s] && (int)e >= array[e])
	{
		pos  = s + (((double)(e - s) / (array[e] - array[s])) *
			    (value - array[s]));

		if (s == e && array[e] == value)
			return (e);

		if (pos > e)
		{
			printf("Value checked array[%i] is out of range\n",
			       (int)pos);
			return (-1);
		}
		else
			printf("Value checked array[%i] = [%i]\n", (int)pos,
			       array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (value > array[pos])
			s = pos + 1;

		else
			e = pos - 1;
	}

	return (-1);
}
