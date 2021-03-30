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
	ssize_t buflen, writelen, total = 0;
	char buf[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	while ((buflen = read(fd, buf, 1024)) > 0)
	{
		if ((total + buflen) > (ssize_t)letters)
			buflen = letters - total;
		writelen = write(1, buf, buflen);
		if (writelen != buflen)
			return (0);
		total += writelen;
	}
	close(fd);

	return (total);
}
