#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write alphabet in lowercase then in upercase.
 * Description: Print using putchar the alphabet in uppercase and lowercase.
 * Return: 0 if completed successfully.
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
