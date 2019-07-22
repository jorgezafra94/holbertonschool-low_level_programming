#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the heap memory of a dog structure
 * @d:dog variable
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free(d->owner);
	free(d);
}
