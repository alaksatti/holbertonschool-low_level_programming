#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcde for main function.
 * @argc: number of arguments/
 * @argv: arguments passed.
 * Return: 0 if successsful otherwise print opcode in hex
 */
int main(int argc, char **argv)
{
	int byte, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		printf("%02x", *((unsigned char *)main + i));

		if (i < (byte - 1))
			putchar(' ');
	}
	printf("\n");

	return (0);

}
