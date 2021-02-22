#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of pointer to char
 * @s: pointer to pointer for value
 * @to: val to set
*/

void set_string(char **s, char *to)
{
	s[0] = malloc(strlen(to) + 1);
	s[0] = to;
}
