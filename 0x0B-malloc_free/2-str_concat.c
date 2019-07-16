#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - create an array using malloc
 * @s1: first array
 * @s2: second array
 * Return: return a pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int a = 0, b = 0, f, d = 0;

	while (*(s1 + a) != '\0')
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	p = malloc(a + b + 1);
	if (!p)
	{
		return (NULL);
	}
	else
	{
		for (f = 0; f < a; f++)
		{
			p[f] = s1[f];
		}
		for (f = a; f <= (a + b); f++, d++)
		{
			p[f] = s2[d];
		}
		return (p);
	}
}
