#include "holberton.h"
#include <limits.h>


/**
 *_atoi - converts a string to an integer, pulls integer and its sign.
 * @s: string to be evaluated.
 *Return: integer with its sign.
 */



int _atoi(char *s)
{
        unsigned int i, numfound = 0, negcounter = 0, finalint = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
	if (s[i] == '-')
		negcounter++;

	else if (s[i] >= '0' && s[i] <= '9')
	{
	finalint = finalint * 10 + (s[i] - '0');
	numfound = 1;
}
	else if (numfound == 1)
		break;
}

        if (negcounter % 2 == 0)
                return (finalint);

        else if (negcounter % 2 != 0)
                return (-finalint);
        else
                return (0);
}

#include <stdio.h>
#include "holberton.h"

/**
 * main - multiplies two numbers together.
 * @argc: number of arguments.
 * @argv: vector of string spassed to program.
 * Return: 0;
 */



int main(int argc, char *argv[])
{
	int a = _atoi(argv[1]);
	int b = _atoi(argv[2]);
	int i = a * b;

	if (argc == 3)
		printf("%i\n", i);

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
