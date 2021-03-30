#include "holberton.h"

/**
 * read_textfile - writes chars of text file to stdout
 * @filename: path to textfile
 * @letters: letters to print
 *
 * Return: size of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t buflen, total = 0;
	char buf[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	while ((buflen = read(fd, buf, 1024)) > 0)
	{
		if ((total + buflen) > (ssize_t)letters)
			buflen = letters - total;
		total += write(1, buf, buflen);
	}
	close(fd);

	return (total);
}
