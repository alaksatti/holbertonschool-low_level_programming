#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print all combinations of signle digit numbers.
 * Description: Using putchar Print all combinations of signle digit numbers.
 * Return: 0 if successful.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + i);

		if (i == 9)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
