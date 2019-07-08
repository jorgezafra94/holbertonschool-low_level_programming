#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - prints the add of two numbers
 * @dest: destiny array
 * @src: source array
 * @n: positions to change
 * Return: array changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont1 = 0, cont2 = 0;

	while (cont1 < n)
	{
		dest[cont1] = dest[cont1] + src[cont1];
		cont1++;
	}
	return (dest);
}
