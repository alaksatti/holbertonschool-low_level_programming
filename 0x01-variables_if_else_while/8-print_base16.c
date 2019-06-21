#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all number of base 16 in lowercase.
 * Description: only using putchar print out 0123456789abcdef.
 * Return: 0 if completed successfully.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
		putchar('0' + i);
	for (i = 'a'; i <= 'f'; ++i)
		putchar(i);
	putchar('\n');

	return (0);

}
