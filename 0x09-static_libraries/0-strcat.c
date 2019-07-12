#include "holberton.h"

/**
 * _strcat - join two strings
 * @src: it is the second string
 * @dest: it is the first string
 * Return: return one string conformed by two strings
 */
char *_strcat(char *dest, char *src)
{
	int conts = 0, contd = 0, cont1, cont2 = 0;

	while (*(dest + contd) != '\0')
	{
		contd++;
	}
	while (*(src + conts) != '\0')
	{
		conts++;
	}
	if (conts > (98 - contd))
		conts = 98 - contd;
	for (cont1 = contd; cont1 <= (contd + (conts - 1)); cont1++)
	{
		*(dest + cont1) = *(src + cont2);

		cont2++;
	}
	*(dest + cont1) = *(src + cont2);
	return (dest);
}
