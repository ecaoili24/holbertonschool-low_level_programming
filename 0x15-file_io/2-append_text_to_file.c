#include "holberton.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, strLEN;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	for (strLEN = 0; text_content[strLEN]; strLEN++)
		;

	write(fd, text_content, strLEN);
	close(fd);
	return (1);
}
