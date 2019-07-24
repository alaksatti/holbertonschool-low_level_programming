#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - determines the correct function to perfrom the operation.
 * @s: operation to be used.
 * Return: pointner to function to be used.
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
