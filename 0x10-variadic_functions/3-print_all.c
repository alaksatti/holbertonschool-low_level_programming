#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_all - prints any char, integer, float, or string.
 * @format: const pointer to const char.
 * Return: nothing.
 */


void print_all(const char * const format, ...)
{
	char *tmp;
	va_list fmt;
	int i = 0;

	va_start(fmt, format);

	while (format[i] && format)
	{
		switch (format[i])
		{

		case 'c':
			printf("%c", (char)va_arg(fmt, int));
			break;
		case 'i':
			printf("%i", va_arg(fmt, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(fmt, double));
			break;
		case 's':
			tmp = va_arg(fmt, char *);
			if (tmp)
			{
				printf("%s", tmp);
				break;

			}
			printf("(nil)");
			break;
		}

	if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
	     || format[i] == 's') && format[i + 1] != '\0' )
		printf(", ");
	i++;
	}
	printf("\n");
	va_end(fmt);
}
