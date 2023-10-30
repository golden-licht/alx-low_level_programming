#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

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
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t bytes_written = write(fd_to, buffer, bytes_read);

		if ((int) bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	close(fd_from);
	close(fd_to);
	return (0);
}
