#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Determine if last digit is within specified ranges.
 *Description: Complete source code and print if it is >5, 0, or <6 != 0.
 *Return: 0 if completed successfully.
 */
int main(void)
{

	int n;
	int LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;
	if (n > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, LD);
	if (n == 0)
		printf("Last digit of %i is %i and is 0\n", n, LD);
	if (n < 6 && n != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
n, LD);
	return (0);
}
