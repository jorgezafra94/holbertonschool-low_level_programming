#include "holberton.h"
/**
 * _memset - change buffer
 * @s: char array
 * @b: char value
 * @n: limit
 * Return: array changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (n > 98)
	{
		n = 98;
	}
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
