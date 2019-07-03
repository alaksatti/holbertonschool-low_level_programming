#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random passwords for crackme.
 *Return: 0.
 */


int main(void)
{

	srand(time(NULL));
	printf("%d", rand());

	return (0);

}
