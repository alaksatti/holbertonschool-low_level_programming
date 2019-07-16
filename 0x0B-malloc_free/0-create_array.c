#include <stdio.h>
#include <stdlib.h>


/**
 * create_array  - creates an array of chars and initializes it.
 * @size: size of array.
 * @c: char to initilize it.
 * Return: pointer to the place of memory or NULL if unsuccessful.
 */


char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size)
		arr = (char *)malloc(size * sizeof(char));

	if (arr)
		for (i = 0; i < size; i++)
			arr[i] = c;

	return (arr);
}
