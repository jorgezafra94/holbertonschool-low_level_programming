#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - print from min to max
 * @min: number of elements
 * @max: type of elements
 * Return: nothing
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i, res = 0;

	if (min > max)
		return (NULL);
	res = max - min;
	p = malloc((res + 1) * sizeof(int));
	if (p == 0)
		return (NULL);
	for (i = 0; i <= res; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
