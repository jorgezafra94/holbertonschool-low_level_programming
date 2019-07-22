#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new pointer of dog_t type
 * @name: member 1
 * @age: member 2
 * @owner: member3
 * Return: return a pointer of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p = NULL;
	int c1 = 0, c2 = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[c1])
		c1++;
	while (owner[c2])
		c2++;
	p = malloc(sizeof(struct dog));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	(*p).name = malloc(c1 + 1);
	if (!(*p).name)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	(*p).owner = malloc(c2 + 1);
	if (!(*p).owner)
	{
		free((*p).name);
		free((*p).owner);
		free(p);
		return (0);
	}
	for (i = 0; i <= c1; i++)
	{
		(*p).name[i] = name[i];
	}
	for (i = 0; i <= c2; i++)
	{
		(*p).owner[i] = owner[i];
	}
	(*p).age = age;
	return (p);
}
