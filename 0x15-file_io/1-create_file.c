#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int _strlen(char *str);
/**
 * create_file - creates a file with permissions rw-------.
 * @filename: name of the file to be created.
 * @text_content: a NULL terminated string.
 * Return: 1 on success else -1;
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);


	if (text_content != NULL)
	{
		w = write(fd, text_content, _strlen(text_content));
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - counts the characters in a string.
 * @str: string whose length is to be counted.
 * Return: length of @str.
 */

int _strlen(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

