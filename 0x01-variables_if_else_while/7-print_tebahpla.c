#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that prints the lowercase aplphabet in reverse.
 * Description: Print the alphabet in reverse.
 * Return: 0 if completed successfully.
 */

int main(void)
{
	char i;

	for (i = 122; i >= 97; --i)
		putchar(i);
	putchar ('\n');
	return (0);
}
