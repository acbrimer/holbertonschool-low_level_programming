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
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->age = age;
	if (name != NULL)
		dog->name = _strdup(name);
	if (owner != NULL)
		dog->owner = _strdup(owner);

	return (dog);
}
