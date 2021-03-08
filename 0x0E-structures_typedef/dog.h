#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - man's best struct
 * @name: dog's name
 * @age: dog's age (in people years?)
 * @owner: dog's human
 *
 * Description: holds information about a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
