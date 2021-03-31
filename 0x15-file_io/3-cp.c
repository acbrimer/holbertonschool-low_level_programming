#include "holberton.h"
#include <stdio.h>

/**
 * main - reads args and calls copy_files
 * @ac: number of args (must == 3)
 * @av: arg values
 *
 * Return: 0 for success, specific error code for fail
*/
int main(int ac, char **av)
{
	int fd_src, fd_dest;
	ssize_t buflen;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((buflen = read(fd_src, buf, 1024)) > 0)
		write(fd_dest, buf, buflen);
	if (close(fd_src) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src), exit(100);
	if (close(fd_dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest), exit(100);
	return (0);
}
