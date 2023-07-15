#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFSIZE 1024
int _strlen(char *str);
/**
 * main - copies content of  one file to another another file.
 * @argc: number of variables passed into the terminal.
 * @argv: array of string literals passed.
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

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
		       	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
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

/**
 * _strlen - gets length of string.
 *
 * @str: string to be scanned.
 * Return: length of string
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return (len);
}



/**
 * str_concat - concatenates s2 to s1.
 * @s1: string to be concatenated with s2.
 * @s2: string to be concatenated with s1;
 * Return: pointer to memory with the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int num1, num2, index_1, index_2;

	num1 = 0, num2 = 0, index_2 = 0;

	if (*s1 || *s2 || s1 != NULL || s2 != NULL)
	{
		while (s1[num1] != '\0')
			++num1;

		while (s2[num2] != '\0')
			++num2;

		concat = malloc(sizeof(*concat) * (num1 + num2 + 1));

		if (concat != NULL)
		{
			for (index_1 = 0; index_1 < (num1 + num2 + 1); index_1++)
			{
				if (index_1 < num1)
					concat[index_1] = s1[index_1];
				else if (index_1 < (num1 + num2))
					concat[index_1] = s2[index_2++];
				else
					concat[index_1] = '\0';
			}

			return (concat);
		}
	}
	return (NULL);
}
