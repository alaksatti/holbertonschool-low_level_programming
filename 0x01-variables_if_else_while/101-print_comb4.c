#include <stdio.h>
#include <stdlib.h>

/**
 *main - print 3 numbers"
 *Description: print the combinations of 3 numbers"
 *Return: 0 if successful.
 */


int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		for (j = j; j <= 9; ++j)
		{
			for (k = 0; k <= 9; ++k)
			{
				if (i != j != k)
				{
					if ((i < j) && (j < k))
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i == 7 && j == 8 && k = 9)
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
	}
	return (0);
}
