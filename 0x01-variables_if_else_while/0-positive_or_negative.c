#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Determine whether n is a positive or negative number.
 *Description: Finish source code.
 *Return: 0 if completed successfully.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	if (n < 0)
		printf("is negative\n");
	if (n == 0)
		printf("is zero\n");




	return (0);
}
