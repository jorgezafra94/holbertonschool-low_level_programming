#include "holberton.h"

/**
 * rot13 - encodes in ROT13
 * @a: an array of chars
 * Return: return an array
 */
char *rot13(char *a)
{
	int cont1 = 0, cont2;

	char array1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char array2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(a + cont1) != '\0')
	{
		for (cont2 = 0; cont2 < 52; cont2++)
		{
			if (*(a + cont1) == array1[cont2])
			{
				*(a + cont1) = array2[cont2];
				break;
			}
		}
		cont1++;
	}
	*(a + cont1) = '\0';
	return (a);
}
