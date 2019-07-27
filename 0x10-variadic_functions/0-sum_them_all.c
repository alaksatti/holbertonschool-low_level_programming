#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters.
 * @n: number of parameters.
 * Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(values, n);

	for (i = 0; i < n; i++)
		sum += va_arg(values, int);

	va_end(values);

	return (sum);
}
