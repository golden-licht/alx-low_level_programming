#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: The file, from which it reads
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes_read, bytes_written;
	char *buff;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buff, letters);
	if ((int) bytes_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if ((int) bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (bytes_written);
}
