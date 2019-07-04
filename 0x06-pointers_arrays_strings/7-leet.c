#include "holberton.h"

/**
 * leet - change lowercase letter into uppercase in special cases
 * @a: an array of chars
 * Return: return an array with somes upper
 */
char *leet(char *a)
{
	int cont1 = 0, cont2;

	char array1[5] = {'4', '3', '0', '7', '1'};
	int array2[10] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};

	while (*(a + cont1) != '\0')
	{
		for (cont2 = 0; cont2 < 10; cont2++)
		{
			if (*(a + cont1) == array2[cont2])
			{
				*(a + cont1) = array1[cont2 / 2];
			}
		}
		cont1++;
	}
	*(a + cont1) = '\0';
	return (a);
}
