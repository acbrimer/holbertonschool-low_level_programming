#include "holberton.h"
#include <stdio.h>

/**
 * copy_files - copies text from one file to another
 * @src_filename: name of source file
 * @dest_filename: name of target file
*/
void copy_files(const char *src_filename, const char *dest_filename)
{
	int fd_src, fd_dest, buflen, writelen;
	char buf[1024];

	fd_src = open(src_filename, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", src_filename);
		exit(98);
	}
	fd_dest = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_dest == -1)
	{
		close(fd_src);
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", dest_filename);
		exit(99);
	}
	while ((buflen = read(fd_src, buf, 1024)) > 0)
	{
		if (buflen <= 0)
		{
			close(fd_src);
			close(fd_dest);
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", src_filename);
			exit(98);
		}
		writelen = write(fd_dest, buf, buflen);
		if (writelen != buflen)
		{
			close(fd_src);
			close(fd_dest);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", dest_filename);
			exit(99);
		}
	}
	close(fd_src);
	close(fd_dest);
}

/**
 * main - reads args and calls copy_files
 * @ac: number of args (must == 3)
 * @av: arg values
 *
 * Return: 1 for success, specific error code for fail
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	copy_files(av[1], av[2]);
	return (1);
}
