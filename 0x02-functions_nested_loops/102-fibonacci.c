#include <stdio.h>


/**
 * main - prints first 50 fib numbers.
 * Return: 0.
 */

int main(void)
{
	long fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; ++i)
		fib[i] = (fib[i - 2] + fib[i - 1]);

	for (i = 0; i < 49; ++i)
		printf("%li, ", fib[i]);

	printf("%li\n", fib[49]);

	return (0);
}
