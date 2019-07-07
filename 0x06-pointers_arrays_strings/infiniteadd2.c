#include "holberton.h"
#include <stdio.h>


/**
 * print_number - prints a buffer.
 *
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int1 = 0, int2 = 0, result;
	int count = 0, i, temp;

	for (i = 0; n1[i] != '\0'; i++)
		int1 = int1 * 10 + (n1[i] - '0');
	for (i = 0; n2[i] != '\0'; i++)
		int2 = int2 * 10 + (n2[i] - '0');

	result = int1 + int2;
	printf("%u\n", int1);
	printf("%u\n", int2);
	printf("%u\n", result);

	while (result > 0)
	{
		result /= 10;
		count++;
	}
	printf("%i\n", count);


	result = int1 + int2;


	if (count > size_r - 1)
		return (0);
	else
	{
		for (i = 0; i < count; i++, result /= 10)
		{
			r[i] = (result % 10 + 48);
		}
		while (i < count - 1)
		{
			temp = r[i];
			r[i] = r[count - 1];
			r[count - 1] = temp;
			i++;
			n--;
		}
	}

	r[count] = '\0';
	return (r);


}
