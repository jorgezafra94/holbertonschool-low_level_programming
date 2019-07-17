#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * letters - number of letters in a string
 * @str: string input
 * Return: number
 */
int letters(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		if (*(str + c) == ' ')
			break;
		c++;
	}
	return (c);
}
/**
 * words - number of words in a string
 * @str: string input
 * Return: number
 */
int words(char *str)
{
	int c = 0, w = 0;

	while (*(str + c) != '\0')
	{
		if (*(str + c) == ' ')
			c++;
		else
		{
			if (str[c + 1] == ' ' || str[c + 1] == '\0')
				w++;
			c++;
		}
	}
	return (w);
}
/**
 * strtow - create a matrix from arguments
 * @str: string input
 * Return: return a pointer of pointer
 */
char **strtow(char *str)
{
	char **p;
	int w = 0, c = 0, l = 0, a = 0, j = 0;

	if (*str == '\0' || str == NULL)
	{
		return (NULL);
	}
	w = words(str);
	p = (char **) malloc(w * sizeof(char *));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	while (*(str + c) != '\0')
	{
		if (*(str + c) == ' ')
			c++;
		else
		{
			l = letters(str + c);
			p[a] = (char *) malloc(sizeof(char) * (l + 1));
			if (!p[a])
			{
				for (j = 0; j <= a; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
			for (j = 0; j < l; j++, c++)
				p[a][j] = str[c];
			p[a][j] = '\0';
			a++;
		}
	}
	p[a] = NULL;
	return (p);
}
