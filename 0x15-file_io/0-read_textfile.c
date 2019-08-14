#include "holberton.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: filename.
 * @letters: the number of letter that should and printed.
 * Return: Actual number of letter it can actuallu read and print.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t wf = 0, rf = 0;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);


	rf = read(fd, buffer, letters);

	if (!rf)
	{
		free(buffer);
		return (0);
	}
	close(fd);

	wf = write(STDOUT_FILENO, buffer, rf);

	if (rf != wf)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (wf);

}
