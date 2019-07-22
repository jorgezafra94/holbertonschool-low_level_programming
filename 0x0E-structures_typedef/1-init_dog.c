#include "dog.h"
/**
 * init_dog - we are going to initialize the values of the structure dog
 * @d: adress of the structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
