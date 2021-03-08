#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * n - null check for string
 * @s: string to check
 *
 * Return: "(nil)" if string is null, else string
*/
char *n(char *s)
{
	return (s == NULL ? "(nil)" : s);
}

/**
 * print_dog - prints dog from struct dog
 * @d: pointer to dog struct to print
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", n(d->name), d->age, n(d->owner));
}
