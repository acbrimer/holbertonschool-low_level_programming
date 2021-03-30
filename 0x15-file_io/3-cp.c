#include "holberton.h"
#include <stdio.h>

/**
 * close_fd - closes a file descriptor and checks for error
 * @fd: file descriptor
*/
void close_fd(int fd)
{
	int res;

	res = close(fd);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies text from one file to another
 * @ac: name of args (must be 3)
 * @av: arg values
 *
 * Return: 0 for success or errnumber
*/
int main(int ac, char **av)
{
	int fd_src, fd_dest;
	ssize_t buflen, writelen;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_dest == -1)
	{
		close_fd(fd_src);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((buflen = read(fd_src, buf, 1024)) > 0)
	{
		if (buflen <= 0)
		{
			close_fd(fd_src);
			close_fd(fd_dest);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		writelen = write(fd_dest, buf, buflen);
		if (writelen != buflen)
		{
			close_fd(fd_src);
			close_fd(fd_dest);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close_fd(fd_src);
	close_fd(fd_dest);
	return (0);
}
