/**
 * int_index - function that searches for an integer.
 * @array: array of integers.
 * @size: the number of elements in the array.
 * @cmp: pointer to function to be used to compare values.
 * Return: the index of the first element that cmp does not return 0.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size > 0 && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);

}
