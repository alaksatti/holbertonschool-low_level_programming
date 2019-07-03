#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random passwords for crackme.
 * Return: 0.
 */


int main(void)
{

	srand(time(NULL));
	sum = 0;
	i = 0;

	while (sum < (2772 - 122))
	{
	r = rand() % 62;
	passwd[i] = a[r];
	sum+= passwd[i];
	i++;
	}

	r = 2772 - sum;
	passwd[i] = r;
	printf("%i", passwd;

	return (0);
}
