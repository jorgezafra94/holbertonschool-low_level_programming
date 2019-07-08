#include "holberton.h"
/**
 * _strpbrk - prints from the character found
 * @s: source array
 * @accept: list of elements to search
 * Return: array changed
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int cont1 = 0, cont2 = 0, aux = 0, prueba = 0;

	while (*(s + cont1) != '\0')
	{
		cont2 = 0;
		while (*(accept + cont2) != '\0')
		{
			if (s[cont1] == accept[cont2])
			{
				aux++;
				prueba = 1;
				break;
			}
			cont2++;
		}
		if (prueba == 1)
			break;
		cont1++;
	}
	if (prueba != 0)
		return (s + cont1);
	else
		return (0);
}
