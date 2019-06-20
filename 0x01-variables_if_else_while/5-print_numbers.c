#include <stdio.h>
#include <stdlib.h>


/**
 * main - print all digit digit numbers of base 10.
 * Description: Prinal all numbers starting frmo 0.
 * Return: 0 if completed successfully.
 */

int main(void)
{
	int i, num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
		printf("%i", num[i]);
	putchar('\n');
	return (0);
}
