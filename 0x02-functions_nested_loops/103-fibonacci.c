#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms.
 * Return: 0;
 */


int main(void)
{

	long int sum = 2, i;

	for (i = 3; i < 4000000; i++)
		if ((i % 2) == 0)
			sum += i;

	printf("%li\n", sum);
	return (0);




}
