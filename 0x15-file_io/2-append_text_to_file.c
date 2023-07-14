#include "main.h"
#include <fcntl.h>
#include <unistd.h>

int _strlen(char *str);
/**
 * append_text_to_file - appends text to file.
 *
 * @filename: name of file where text is to be appended.
 * @text_content: text to be appended.
 * Return: 1 if success and -1 if text_content is NULL
 * if the file does not exist or we don't have the necessary
 * permissions.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR, S_IWUSR);
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
 * _strlen - gets length of a string.
 *
 * @str: string to be scanned.
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
