#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - give you the string in reverse form
 * @s: input of a string
 * Return: the string in reverse form
 */
void rev_string(char *s)
{
	int cont1 = 0, cont2 = 0;

	char vari, varf;

	while (*(s + cont1) != '\0')
	{
		cont1++;
	}
	cont1 = cont1 - 1;

	while (cont1 >= 0)
	{
		if (cont1 >= cont2)
		{
			vari = *(s + cont2);
			varf = *(s + cont1);
			*(s + cont2) = varf;
			*(s + cont1) = vari;
		}
		cont2++;
		cont1--;
	}
}
