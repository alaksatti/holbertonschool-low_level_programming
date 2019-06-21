#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 0 - 99.
 * Description: Numbers separated by commas.
 * Return: 0 if completed successfully.
 */

int main(void)
{
	int i, j, x, y;

	for (i = 0; i <= 9; ++i){
		for (j = 0; j <= 9; ++j)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');

	for (x = 0; x <= 9; ++x)
	{
		for (y = 0; y <= 9; ++y)
		{
			putchar('0' + x);
			putchar('0' + y);
			if ((x == 9) && (y == 9))
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	}

	return (0);
}