#include "holberton.h"
/**
 * _strchr - prints from the character found
 * @s: source array
 * @c: character to find
 * Return: array changed
 */
char *_strchr(char *s, char c)
{
	int cont1 = 0, cont2 = -1;

	while (*(s + cont1) != '\0')
	{
		if (s[cont1] == c)
		{
			cont2 = cont1;
			break;
		}
		cont1++;
	}
	if (cont2 != -1)
		return (s + cont2);
	else
		return (0);
}
