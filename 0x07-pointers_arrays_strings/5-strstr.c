#include "holberton.h"
/**
 * _strstr - prints from the character found
 * @haystack: source array
 * @needle: list of elements to search
 * Return: array
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int cont1 = 0, aux = 0, prueba = 0, ini = 0, cont2 = 0;

	while (*(needle + aux) != '\0')
		aux++;
	while (*(needle + cont1) != '\0')
	{
		while (*(haystack + cont2) != '\0')
		{
			if (haystack[cont2] == needle[cont1])
			{
				cont1++;
				cont2++;
				prueba++;
				if (prueba == aux)
				{
					ini = cont2 - aux;
					break;
				}
			}
			else
			{
				cont1 = 0;
				cont2++;
			}
		}
		break;
	}
	if (prueba == aux)
		return (haystack + ini);
	else
		return (0);
}
