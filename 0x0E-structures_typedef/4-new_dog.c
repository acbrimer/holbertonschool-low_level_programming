#include <stdlib.h>
#include "dog.h"

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
	int i = 0;

	if (dog == NULL)
		return (NULL);
	dog->age = age;
	if (name != NULL)
	{
		dog->name = malloc(sizeof(name));
		if (dog->name == NULL)
			return (NULL);
		while (name[i])
		{
			dog->name[i] = name[i];
			i++;
		}
	}
	i = 0;
	if (owner != NULL)
	{
		dog->owner = malloc(sizeof(owner));
		if (dog->owner == NULL)
			return (NULL);
		while (owner[i])
		{
			dog->owner[i] = owner[i];
			i++;
		}
	}

	return (dog);
}
