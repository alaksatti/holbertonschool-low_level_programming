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
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'v', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 'z'};

	strrev(arr);
	putchar (arr);
	putchar ('\n');
	return (0);
}
