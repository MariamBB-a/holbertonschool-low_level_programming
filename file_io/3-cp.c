#include "main.h"
#include <stdio.h>

void fd_error_read(char *file);
void fd_error_write(char *file);
void fd_error_close(int fd);
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to);

/**
 * fd_error_read - prints read error message and exits
 * @file: filename
 */
void fd_error_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * fd_error_write - prints write error message and exits
 * @file: filename
 */
void fd_error_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * fd_error_close - prints close error message and exits
 * @fd: file descriptor
 */
void fd_error_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * copy_file - copies contents from one file to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source filename
 * @file_to: destination filename
 */
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buffer[1024];
	int rd, wr;

	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
			fd_error_write(file_to);
	}

	if (rd == -1)
		fd_error_read(file_from);
}

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		fd_error_read(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		fd_error_write(argv[2]);

	copy_file(fd_from, fd_to, argv[1], argv[2]);

	if (close(fd_from) == -1)
		fd_error_close(fd_from);

	if (close(fd_to) == -1)
		fd_error_close(fd_to);

	return (0);
}
