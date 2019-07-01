#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy src string into dest
 * @dest: final array
 * @src: string to copy
 * Return: copy content of src into dest
 */
char *_strcpy(char *dest, char *src)
{
	int cont1 = 0, aux;

	while (*(src + cont1) != '\0')
	{
		*(dest + cont1) = *(src + cont1);
		cont1++;
	}
	aux = cont1 + 1;
	if (*(src + aux) == '\0')
	{
		*(dest + aux) = *(src + aux);
	}
	return (dest);
}
