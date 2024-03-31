#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 *         0 if the file can not be opened or read, or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1)
	{
		close(fd);
		return (0);
	}
	else if (n_written != n_read)
	{

	close(fd);
	return (0);
	}
	close(fd);
	return (n_written);
}

