#include "holberton.h"
/**
 * _strspn - prints from the character found
 * @s: source array
 * @accept: list of elements to search
 * Return: array changed
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont1 = 0, cont2 = 0, aux = 0, prueba = 0;

	while (*(s + cont1) != '\0')
	{
		cont2 = 0;
		prueba = 0;
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
		if (prueba != 1)
			break;
		cont1++;
	}
	return (aux);
}
