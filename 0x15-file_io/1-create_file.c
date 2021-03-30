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
	long int fd, len = 0, writelen;
	char *text;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		while (text_content[len])
			len++;
	text = text_content ? text_content : "";
	writelen = write(fd, text, len + 1);
	close(fd);
	if (writelen != len + 1)
		return (-1);

	return (1);
}
