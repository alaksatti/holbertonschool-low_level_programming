#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random passwords for crackme.
 * Return: 0.
 */


int main(void)
{
	int i, r, sum;

	char poss[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQURSTUVWXYZ0123456789";
	char passwd[100];

	srand(time(NULL));
	sum = 0;
	i = 0;

	while (sum < (2772 - 122))
	{
	r = rand() % 62;
	passwd[i] = poss[r];
	sum+= passwd[i];
	i++;
	}

	r = 2772 - sum;
	passwd[i] = r;
	printf("%s", passwd);

	return (0);
}
