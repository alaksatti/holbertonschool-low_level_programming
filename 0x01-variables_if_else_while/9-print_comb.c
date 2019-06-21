#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print all combinations of signle digit numbers.
 * Description: Using putchar Print all combinations of signle digit numbers.
 * Return: 0 if successful.
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (!((i == 9) && (j == 9)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
