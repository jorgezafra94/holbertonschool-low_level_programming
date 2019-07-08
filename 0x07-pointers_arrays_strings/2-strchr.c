#include "holberton.h"
/**
 * _strchr - prints from the character found
 * @s: source array
 * @c: character to find
 * Return: array changed
 */
char *_strchr(char *s, char c)
{
	int cont1 = 0;

	while (*(s + cont1) != '\0')
	{
		if (s[cont1] == 'c')
		{
			return (s + cont1);
		}
		cont1++;
	}
	return (0);
}
