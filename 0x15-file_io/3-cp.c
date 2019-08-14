#include "holberton.h"


/**
 * main - copies one file to another.
 * @argc: number of arguments.
 * @argv: argument content
 * Return: 97 for incorrect # args, 98 if cant read file, 99 if cant create -
 * output file, 100 if cant closef iles, 0 on success.
 */

int main(int argc, char **argv)
{
	int fd1 = 0, fd2 = 0, rf = 0, wf = 0, c1 = 0, c2 = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	rf = read(fd1, buffer, 1024);
	while (rf)
	{
		wf = write(fd2, buffer, rf);
		if (wf != rf)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s",
				argv[2]);
			exit(99);
		}
	}
	if (rf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	c1 = close(fd1);

	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	c2 = close(fd2);

	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);

}
