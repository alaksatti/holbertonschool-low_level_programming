#include "holberton.h"

/**
 * reverse_array - resverses the contents of an array.
 *@a:Array to be reversed.
 *@n:  the number of elements in the array.
 * return: pointer to array.
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < (n - 1))
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}


}
