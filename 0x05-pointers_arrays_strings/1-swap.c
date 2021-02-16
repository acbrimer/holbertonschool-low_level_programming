/**
 * swap_int - swaps value of two ints
 * @a: first int
 * @b: second int
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
