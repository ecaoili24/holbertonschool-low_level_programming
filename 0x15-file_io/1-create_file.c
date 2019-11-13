#include "holberton.h"

/**
 * create_file - a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: text_content is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, strLEN;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	for (strLEN = 0; text_content[strLEN]; strLEN++)
		;

	write(fd, text_content, strLEN);
		close(fd);
		return (1);
}
