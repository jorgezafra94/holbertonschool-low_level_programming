#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: it is the second string
 * @s2: it is the first string
 * Return:positive or negative value if the firs is bigger than the second
 */
int _strcmp(char *s1, char *s2)
{
	int conts = 0, contd = 0, cont1, mayor, comp = 0;

	while (*(s1 + contd) != '\0')
	{
		contd++;
	}
	while (*(s2 + conts) != '\0')
	{
		conts++;
	}
	if (contd > conts)
		mayor = contd - 1;
	else
		mayor = conts - 1;
	for (cont1 = 0; cont1 <= mayor; cont1++)
	{
		if (*(s1 + cont1) != *(s2 + cont1))
		{
			comp = *(s1 + cont1) - *(s2 + cont1);
			break;
		}
	}
	return (comp);
}
