#include "holberton.h"
#include <stdio.h>
/**
*print_last_digit- prints the last digit of a number.
* Description: Print the last digit of a number.
* @r: number to be evaluated.
* Return: the last value of a digit.
*/

int print_last_digit(int r)
{
	if (r < 0)
		r = -r;

	if (r >= 1000)
	{
		printf("%i", r % 1000);
		return((r % 1000));
	}

	if (r >= 100 && r < 1000)
	{
		printf("%i", r % 100);
		return ((r % 100));
	}

	if (r >= 10 && r < 100)
	{
		printf("%i", r % 10);
		return ((r % 10));
	}

	if (r >= 0 && r < 10)
	{
		printf("%i", r);
		return (r);
	}
	else
	{
		printf("%i", r);
		return(r);
	}
}
