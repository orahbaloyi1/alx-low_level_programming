#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - disctributes bytes equivalentt to 1024 for a buffer.
 * @file: The name of the file buffer.
 * Return: A pointer to the new buffer that is allocated.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf  = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Failed to creat buffer for file %s\n", file);
		exit(EXIT_FAILURE);
	}
	return (buf);
}

/**
 * close_file - Closes file.
 * @fd: closes file descriptor..
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents to another file.
 * @argc: The number of arguments.
 * @argv: pointers to an array to  the arguments.
 * Return: always  0 on success.
 * Description: If exit code 97.
 *              If exit code 98.
 *              If exit code 99.
 *              If exit code 100.
 */
int main(int argc, char *argv[])
{
	int from;
	int to;
	int r;
	int w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}

	w = write(to, buf, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(99);

	} while (r > 0);

	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
