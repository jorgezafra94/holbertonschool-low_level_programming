#include "holberton.h"
/**
 * infinite_add - prints the add of two numbers
 * @s: char array
 * @b: char value
 * @n: limit
 * Return: array changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (n >= 98)
	{
		n = 97;
	}
	while (i < n)
        {
		*(s + i) = b;
		i++;
        }
	return (s);
}
