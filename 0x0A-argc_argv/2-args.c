#include <stdio.h>


/**
 * main - prints all arguments recieved.
 * @argc: argument count.
 * @argv: vector of strings passed to program.
 * Return: 0 upon successful completion.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);

	return (0);
}
