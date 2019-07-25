#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms.
 * Return: 0;
 */


int main(void)
{

	long int sum = 1, i, fib[40];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 32; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if ((fib[i] % 2) == 0)
			sum += fib[i];
	}

	printf("%li\n", sum);
	return (0);




}
