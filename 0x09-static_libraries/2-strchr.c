#include "holberton.h"
/**
 * _strchr - prints from the character found
 * @s: source array
 * @c: character to find
 * Return: array changed
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
