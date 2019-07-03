#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - generates random passwords for crackme.
 *101-crackme
 *Return: Passwords.
 */


int main(void)
{

	srand(time(NULL));
	printf("%i", rand());

	return (0);
}
