#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * open_file - Opens file
 * @argc: argument count
 * @argv: argument vector
 * @fd_from: Pointer to file descriptor
 * @fd_to: Pointer to file descriptor
 */

void open_file(int argc, char **argv, int *fd_from, int *fd_to)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(*fd_from);
		exit(99);
	}
}


/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Copies the contents of the first argument, argv[1]
 * into a file, named after argv[2]
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	open_file(argc, argv, &fd_from, &fd_to);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t bytes_written = write(fd_to, buffer, bytes_read);

		if ((int) bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if ((int) bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	fd = 0;
	fd = (close(fd_from) == -1) ? fd_from : fd_to;
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}

	close(fd_from);
	close(fd_to);
	return (0);
}
