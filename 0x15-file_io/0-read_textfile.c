#include "holberton.h"
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cnt;
	char *c = (char *) malloc(sizeof(char) * letters);

	if (!letters)
		return (0);

	if (c == NULL)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("r1"); exit (1);
	}

	cnt = read(fd, c, letters);
	write(1, c, letters);

	return (cnt);
}
