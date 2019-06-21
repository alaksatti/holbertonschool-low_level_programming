#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 0 - 99.
 * Description: Numbers separated by commas.
 * Return: 0 if completed successfully.K
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
		for (j = 0; j <= 9; ++j)
		{
			if (i != j)
			{
				if (i < j)
				{
					putchar('0' + i);
					putchar('0' + j);

					if ((i == 8) && (j == 9))
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	return (0);
}
