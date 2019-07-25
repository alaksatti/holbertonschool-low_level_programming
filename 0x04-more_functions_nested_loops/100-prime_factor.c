#include <stdio.h>
#include "holberton.h"


/**
 * main - prints prime numbers for 1231952.
 * Return: nothing.
 */



int main(void)
{
	long int num = 612852475143;
	unsigned int i;

	for (i = 2; i <= num; i++)
		if (num % i == 0)
		{
			num = (num / i);
			i--;
		}

	printf("%u\n", i);
	return (0);
}
