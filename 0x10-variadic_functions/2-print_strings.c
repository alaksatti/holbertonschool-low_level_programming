#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_strings - prints strings followed by a newline.
 * @separator: string to be printed between strings.
 * @n: number of strings to be printed.
 * Return: nothing.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	int i;
	va_list(strings);
	char *tmp;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(strings, n);

	for (i = 0; i < (int) n; i++)
	{
		tmp = va_arg(strings, char *);

		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");

		if (separator != NULL && i < (int) n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
