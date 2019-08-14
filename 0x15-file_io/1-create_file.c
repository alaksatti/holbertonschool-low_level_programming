#include "holberton.h"

/**
 * create_file -  function that creates a file.
 * @filename - filename.
 * @text_content - string to write to the file.
 * Return: 1 on success.
 */


int create_file(const char *filename, char *text_content)
{
	int fd = 0, wf = 0, i;


	if (!filename)
		return (-1);


	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	wf = write(fd, text_content, len);

	if (wf != i)
	{
		close (fd);
		return (-1);
	}

	close(fd);
	return (1);
}
