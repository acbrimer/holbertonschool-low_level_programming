#include <stdlib.h>
/**
 * print_name - prints input name with input function
 * @name: name to print
 * @f: function to handle print
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
