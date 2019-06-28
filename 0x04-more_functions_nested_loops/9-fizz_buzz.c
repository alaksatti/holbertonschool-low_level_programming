#include "holberton.h"
#include <stdio.h>

/**
 * main - Fizz buzz test. print 1 - 100. Prints Fizz, Buzz, Fizz Buzz for case.
 *Return:0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%i ", i);
	}
	printf("\n");


		return (0);

}
