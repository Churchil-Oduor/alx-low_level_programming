#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFSIZE 1024

/**
 * main - copies content of  one file to another another file.
 * @argc: number of variables passed into the terminal.
 * @argv: array of string literals passed.
 * Return: 0 always.
 */

int main(int argc, char **argv)
{
	int fd1, fd2, c1, c2;
	char *buffer;

	buffer = malloc(sizeof(buffer) * BUFFSIZE);

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	read(fd1, buffer, BUFFSIZE);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	write(fd2, buffer, BUFFSIZE);
	c1 = close(fd2);
	c2 = close(fd1);

	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %d", c1);
	else if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %d", c2);



	return (0);
}

