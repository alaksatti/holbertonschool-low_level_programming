#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 0 - 99.
 * Description: Numbers separated by commas.
 * Return: 0 if completed successfully.
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar('0' + (i / 10));
		putchar('0' + (i % 10));

		if (((i / 10) == 9) && ((i % 10) == 9))
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}

			}
return (0);

}
