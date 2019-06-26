#include "holberton.h"

/**
*print_last_digit- prints the last digit of a number.
* Description: Print the last digit of a number.
* @r: number to be evaluated.
* Return: the last value of a digit.
*/

int print_last_digit(int r)
{
	int LD;

	LD = r % 10;

	if (LD < 0)
		LD = (-LD);

	return (LD);

}
