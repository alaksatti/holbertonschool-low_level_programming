#include <stdio.h>

/**
 * main - multiplies two numbers together.
 * @argc: number of arguments.
 * @argv: vector of string spassed to program.
 * Return: 0;
 */



int main(int argc, int *argv[])
{
	int i = argv[1] * argv[2];

	if (argc == 3)
		printf("%i\n", i);

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
