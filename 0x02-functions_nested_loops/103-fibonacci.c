#include <stdio.h>


/**
 * main - prints the even terms of fib numbers whose values are below 4 million.
 * Return: 0;
 */


int main(void)
{
	long i, fib[50], sum = 0;

	fib[0] = 1;
	fib[1] = 2;


	for (i = 2; fib[i] <= 4,000,000; ++i)
	{
		if (i % 2 == 0)
			sum += i;
		fib[i] = fib[i - 2] + fib [i - 1];
	}

	printf("%li\n", sum);

	return (0);
}
