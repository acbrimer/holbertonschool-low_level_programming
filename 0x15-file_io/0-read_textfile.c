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
	int fd, buflen, writelen;
	ssize_t total = 0;
	char buf[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd = -1)
		return (0);
	while ((buflen = read(fd, buf, 1024)) > 0)
	{
		if (buflen == -1)
			return (0);
		if ((total + (ssize_t)buflen) > (ssize_t)letters)
			buflen = (int)(letters - total);
		writelen = write(1, buf, buflen);
		if (writelen != buflen)
			return (0);
		total += (ssize_t)writelen;
	}
	close(fd);

	return (total);
}
