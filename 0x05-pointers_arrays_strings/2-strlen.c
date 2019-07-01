#include "holberton.h"
/**
 * _strlen - give you the size of a string
 * @s: input of a string
 * Return: the number of characters of a string
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
	{
		cont++;
	}
	return (cont);
}
