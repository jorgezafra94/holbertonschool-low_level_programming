#include "holberton.h"

/**
 * _strncpy - join two strings limited by n
 * @src: it is the second string
 * @dest: it is the first string
 * @n: limit
 * Return: return one string conformed by two strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int conts = 0, contd = 0, cont1, cont2;

	while (*(dest + contd) != '\0')
	{
		contd++;
	}
	while (*(src + conts) != '\0')
	{
		conts++;
	}
	if (n >= 98)
		n = 97;

	if (n > conts)
	{
		for (cont1 = 0; cont1 <= conts; cont1++)
		{
			*(dest + cont1) = *(src + cont1);
		}
		for (cont2 = cont1; cont2 < n; cont2++)
		{
			*(dest + cont2) = '\0';
		}
	}
	else
	{
		for (cont1 = 0; cont1 <= (n - 1); cont1++)
		{
			*(dest + cont1) = *(src + cont1);
		}
	}
	return (dest);
}
