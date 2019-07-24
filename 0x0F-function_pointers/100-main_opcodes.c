#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int opcode, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	opcode = atoi(argv[1]);

	if (opcode < 0)
	{
		printf("Error\n");
		exit (2);
	}
	for (i = 0; i < opcode; i++)
	{
		printf("%2x", *((unsigned char *)main + i));
		putchar(' ');
	}
	printf("\n");

	return (0);

}
