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

	if (dog == NULL)
		return (NULL);
	if (age != NULL)
		dog->age = age;
	if (name != NULL)
		dog->name = name;
	if (owner != NULL)
		dog->owner = owner;

	return (dog);
}
