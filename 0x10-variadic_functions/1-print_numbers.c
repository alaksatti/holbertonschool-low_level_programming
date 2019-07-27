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

	va_list(num);
	int i;


	if (n <= 0)
		printf("\n");

	va_start(num, n);

	for (i = 0; i < (int) n; i++)
	{
		printf("%i", va_arg(num, int));

		if (i < ((int) n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(num);
}
