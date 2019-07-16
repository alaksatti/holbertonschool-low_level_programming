#include <stdio.h>

/**
 * main - prints sum of mulitples of 3 or 5 up to 1024.
 * Return: 0 upon successful completion.
 */


int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; ++i)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}


	printf("%i\n", sum);



	return (0);
}
