/**
 * print_name - prints input name with input function
 * @name: name to print
 * @f: function to handle print
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
