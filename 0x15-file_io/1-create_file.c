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
	int fd, len = 0, writelen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		while (text_content[len])
			len++;
	writelen = write(fd, text_content ? text_content : "", len);
	close(fd);
	if (writelen != len)
		return (-1);

	return (1);
}
