#include "holberton.h"

/**
* main - returns int
*
* Return: Always 0.
*/
int main(void)
{
	char hstr[] = "Holberton\n";

	/* pointer to position 0 of char[] */
	char *p = hstr;

	/* while pointer returns char */
	while (*p)
	{
		_putchar(*p);
		/* move pointer to next address in string */
		p++;
	}

	return (0);
}
