#include "holberton.h"
#include <stdlib.h>


/**
 * argstostr - concatenates all the arguments of program.
 * @ac: number of arguments.
 * @av: arguments passed.
 * Return: pointer to new string.
 */


char *argstostr(int ac, char **av)
{
	char *arr;
	int l = 0, j = 0, i = 0, k = 0;

	if (av == 0 || ac == 0)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
			;
		l += j + 1;
	}

	arr = (char *)malloc(sizeof(char) * (l + 1));

	if (arr == 0)
		return (NULL);

	for (i = 0; i < ac; ++i, ++k)
	{
		for (j = 0; av[i][j] != '\0'; ++j, ++k)
			arr[k] = av[i][j];
		arr[k] = '\n';
	}


	return (arr);

}
