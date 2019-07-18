#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - check malloc
 * @b: sizeof malloc
 * Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);

}
