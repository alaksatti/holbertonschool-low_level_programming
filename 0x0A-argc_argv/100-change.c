#include <stdio.h>
#include <stdlib.h>


/**
 * coins - print number of coins to give back.
 * @cents: cents passed.
 * @count: number of coins.
 * Return: nothing.
 */


void coins(int cents, int count)
{

	if (cents >= 25)
		coins((cents - 25), (count + 1));

	else if (cents < 25 && cents >= 10)
		coins((cents - 10), (count + 1));

	else if (cents < 10 && cents >= 5)
		coins((cents - 5), (count + 1));

	else if (cents < 5 && cents >= 2)
		coins((cents - 2), (count + 1));

	else if (cents < 2 && cents >= 1)
		coins((cents - 1), (count + 1));

	else if (cents == 0)
		printf("%i\n", count);
}





/**
 * main - Evaluates string passed.
 * @argc: Number of arguments passed.
 * @argv: Amount of cents.
 * Return: 0;
 */



int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0 || cents == 2147483647)
	{
		printf("0\n");
		return (0);
	}


	coins(cents, 0);
	return (0);
}
