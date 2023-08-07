#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @ac: The argument count
 * @av: the argument vector
 *
 * Return: Return 0 on success
 */
int main(int ac, char **av)
{
	int from, to, r, w;
	char *buff;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(av[2]);
	from = open(av[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(2, "Error: Can't read from  %s\n", av[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to  %s\n", av[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}

/**
 * create_buffer - allocate 1024 bytes for a buffer
 * @file: the name of the file buffeer is storing chars for
 *
 * Return: Return pointer tot he newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(2, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - close the file descriptors
 * @fd: teh file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
