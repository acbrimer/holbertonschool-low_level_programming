#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - inits a new var of type struct dog
 * @d: dog struct to init
 * @name: name for dog struct
 * @age: age for dog struct
 * @owner: owner for dog struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name == NULL ? "" : name;
	d->age = age;
	d->owner = owner == NULL ? "" : owner;
}
