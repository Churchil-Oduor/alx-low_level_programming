#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


/**
 * create_file - creates a file with permissions rw-------.
 * @filename: name of the file to be created.
 * @text_content: a NULL terminated string.
 * Return: 1 on success else -1;
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	fd = open(filename, O_CREATE | O_WRONGLY | O_TRUNC, S_IRUSR | S_IWUSR);

}
