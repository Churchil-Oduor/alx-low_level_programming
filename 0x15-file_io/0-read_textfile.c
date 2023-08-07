#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads a text file and
 * prints it to the posix standard output.
 *
 * @filename: name of the file to be read.
 * @letters: number of letters to read and print.
 *
 * Return: 0 if file cannot be opened or read or is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, readbytes, written_bytes;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(buffer) * letters);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	readbytes = read(fd, buffer, letters);
	if (readbytes == -1)
		return (0);

	written_bytes = write(1, buffer, letters);
	if (written_bytes != (int)letters)
		return (0);

	close(fd);
	free(buffer);

	return ((size_t)readbytes);
}
