#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to function.
 * @separator: string between numbers.
 * @n: number of integers passed to function.
 * Return: nothing.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list num;
	unsigned int i;


	if (n <= 0)
		printf("\n");

	if (n)
	{

		va_start(num, n);

		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(num, int));

			if ((i < (n - 1)) && separator)
				printf("%s", separator);
		}

		va_end(num);
		printf("\n");
	}
}
