#include "holberton.h"

/**
 * create_file - writes text to a new file
 * @filename: path to new file
 * @text_content: text to put in the file
 *
 * Return: 1 for success, -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, writelen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		writelen = write(fd, text_content, len);
		if (writelen == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
