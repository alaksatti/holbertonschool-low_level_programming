#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes arguments from the user and performs basic arithematic.
 * @argc: number of arguments passed.
 * @argv: contents of arguments.
 * Return: 0 if successful, 98 if argc != 4, 99 if  / or % by 0.
 */


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '%'  || argv[2][0] == '/') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);







}
