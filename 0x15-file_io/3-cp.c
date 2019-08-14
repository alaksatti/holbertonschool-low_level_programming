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
		arg_error();

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
		read_error(argv[1]);

	fd2 = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);

	if (fd2 == -1)
		write_error(argv[2]);


	while ((rf = read(fd1, buffer, 1024)))
	{
		if (rf == -1)
			read_error(argv[1]);
		if (rf)
		{
			wf = write(fd2, buffer, rf);
			if (wf != rf)
				write_error(argv[2]);
		}
	}

	c1 = close(fd1);

	if (c1 == -1)
		closing_error(fd1);

	c2 = close(fd2);

	if (c2 == -1)
		closing_error(fd2);

	return (0);

}
/**
 * write_error - prints error to write message.
 * @arg: file that failed to write.
 * Return: exit 99.
 */

void write_error(char *arg)
{

	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
	exit(99);

}

/**
 * read_error - prints error to read message.
 * @arg: file that failed to read.
 * Return: exit 98.
 */

void read_error(char *arg)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	exit(98);


}

/**
 * arg_error - error message for incorrect arguments.
 * Return: exit 97.
 */

void arg_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);

}
/**
 * closing_error - prints error message if cannot close fd properly.
 * @fd: file description.
 * Return: exit 100.
 */

void closing_error(int fd)
{
	dprintf(STDERR_FILENO, "Can't close fd %i\n", fd);
	exit(100);
}
