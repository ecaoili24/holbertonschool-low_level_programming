#include <stdio.h>
#include "holberton.h"
void errClose(char *message, int fd, int status);
void err(char *message, char *file, int status);
/**
 * main - a program that copies the content of a file to another file
 * @argc: the argument count
 * @argv: the pointer to the the arguements
 *
 * Return: Always 0 (for success) and anthing else for error
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t fd_from, fd_to;
	ssize_t rc, wc, cc;

	if (argc != 3)
	{
		dprintf(STDIN_FILENO, "cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		err("Error: Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		err("Error: Can't write to", argv[2], 99);

	do {
		rc = read(fd_from, buffer, 1024);
		if (rc == -1)
			err("Error: Can't read from file", argv[1], 98);
		wc = write(fd_to, buffer, rc);
		if (wc == -1)
			err("Error: Can't write to", argv[2], 99);
	} while (rc == 1024);

	cc = close(fd_from);
	if (cc == -1)
		errClose("Error: Can't close fd", (int) fd_from, 100);

	cc = close(fd_to);
	if (cc == -1)
		errClose("Error: Can't close fd", (int) fd_to, 100);

	return (0);
}

/**
 * err - allows an error message to print into standard error
 * @message: the message string
 * @fd: the file string
 * @status: the int status for exit
 */
void err(char *message, char *file, int status)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(status);
}

/**
 * errClose - allows an error message to print into standard error
 * @message: the message string
 * @file: the file string
 * @status: the int status for exit
 */
void errClose(char *message, int fd, int status)
{
	dprintf(STDERR_FILENO, "%s %d\n", message, fd);
	exit(status);
}
