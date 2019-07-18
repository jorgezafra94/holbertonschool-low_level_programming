#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenate tw strings specially
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cont1 = 0, cont2 = 0, i;
	char *p = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[cont1] != '\0')
		cont1++;
	while (s2[cont2] != '\0')
		cont2++;
	if (n >= cont2)
		n = cont2;
	p = malloc(cont1 + n + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < cont1; i++)
	{
		p[i] = s1[i];
	}
	for (i = cont1; i < (cont1 + n); i++)
	{
		p[i] = s2[i - cont1];
	}
	p[i] = '\0';
	return (p);

}
