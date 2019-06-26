#include "holberton.h"

/**
*print_last_digit- prints the last digit of a number.
* Description: Print the last digit of a number.
* @num: number to be evaluated.
* Return: the last value of a digit.
*/

int print_last_digit(int num)
{
	int num, LD;

	LD = num % 10;

	if (LD < 0)
		return (-LD);
	else
		return (LD);
}
