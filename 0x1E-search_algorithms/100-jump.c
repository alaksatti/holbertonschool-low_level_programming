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
	int jump = sqrt((int)size), pos, f = 0, i;

	if (!array)
		return (-1);
	pos = f + jump;
	while (1)
	{
		printf("Value checked array[%i] = [%i]\n", f, array[f]);
		if (array[pos] >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n",
			       f, pos);
			for (i = f; i <= pos; i++)
			{
				if (i < (int)size)
				{
					printf("Value checked array[%i] = [%i]\n",
					       i, array[i]);
					if (array[i] == value)
						return (i);
				}
				else
					return (-1);
			}
		}
		f = pos;
		pos = f + jump;
	}
}
