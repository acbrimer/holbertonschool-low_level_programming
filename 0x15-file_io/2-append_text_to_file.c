#include "holberton.h"

/**
 * append_text_to_file - appends text to file if exists
 * @filename: path to existing file
 * @text_content: text to append to the file
 *
 * Return: 1 for success, -1 for failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, writelen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
