/**
 * _isdigit - checks if ascii int is digit
 * @c: the ascii code for char to check
 *
 * Return: 1 if c is digit, else 0
*/
int _isdigit(int c)
{
	return ((c >= 48) && (c <= 57) ? 1 : 0);
}
