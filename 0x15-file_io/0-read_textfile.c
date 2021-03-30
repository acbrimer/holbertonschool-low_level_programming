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
	long int fd, buflen, writelen;
	char *buf = malloc(letters);

	if (filename == NULL || buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		close(fd);
	buflen = read(fd, buf, letters);
	if (buflen <= 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	writelen = write(1, buf, (size_t)buflen < letters ? (size_t)buflen : letters);
	free(buf);
	close(fd);

	return (writelen <= 0 ? 0 : (ssize_t)writelen);
}
