#include "holberton.h"

/**
 * _strncat - join two strings limited by n
 * @src: it is the second string
 * @dest: it is the first string
 * @n: limit
 * Return: return one string conformed by two strings
 */
char *_strncat(char *dest, char *src, int n)
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
	if (n >= (98 - contd))
	{
		n = 97 - contd;
	}
	n = n - 1;
	for (cont1 = contd; cont1 <= (contd + n); cont1++)
	{
		*(dest + cont1) = *(src + cont2);

		cont2++;
	}
	return (dest);
}
