#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: path to file.
 * @text_content: string to be added to the end of a file.
 * Return: 1 on success, -1 if failed.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0,  wf = 0, i = 0;


	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;


	wf = write(fd, text_content, i);

	if (wf < i)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
