#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - create a matrix from arguments
 * @ac: number of arguments
 * @av: array of pointers
 * Return: return a pointer
 */
char *argstostr(int ac, char **av)
{
	int j = 0, i = 0, cont = 0, aux = 0;
	char *p;

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			cont++;
			j++;
		}
		cont++;
		i++;
	}
/* count the number of chars including the nulls */
	p = malloc(sizeof(char) * (cont + 1));
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			p[aux] = av[i][j];
			j++;
			aux++;
		}
		p[aux] = '\n';
		aux++;
		i++;
	}
/* asign the value of each char and the null replace by \n */
	return (p);
}
