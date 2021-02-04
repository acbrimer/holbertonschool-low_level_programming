#include <stdlib.h>

/**
 * main - Entry point
 * prints quote to stderr using system()
 * Return: Always 1 (Success)
 */
int main(void)
{
	system("echo 'and that piece of art is useful\" - Dora Korpar, 2015-10-19' 1>&2");
	return (1);
}
