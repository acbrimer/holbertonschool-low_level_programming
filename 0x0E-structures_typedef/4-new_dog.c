#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - copies string using malloc
 * @str: string to copy
 *
 * Return: char * pointer to copied string
*/
char *_strdup(char *str)
{
	int l = 0, i;
	char *n = NULL;

	if (str == NULL)
		return (NULL);
	while (str[l])
		l++;
	n = (char *)malloc(l + 1);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		n[i] = str[i];
	n[l] = '\0';

	return (n);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog of type dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->age = age;
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}
