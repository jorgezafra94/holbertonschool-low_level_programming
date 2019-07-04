#include "holberton.h"

/**
 * cap_string - change lowercase letter into uppercase in special cases
 * @a: an array of chars
 * Return: return an array with somes upper
 */
char *cap_string(char *a)
{
	int cont1 = 0, cont2;

	int array[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(a + cont1) != '\0')
	{
		if (*(a + cont1) >= 97 && *(a + cont1) <= 122)
		{
			if (cont1 == 0)
				*(a + cont1) = (*(a + cont1)) - 32;
			else if (cont1 > 0)
			{
				for (cont2 = 0; cont2 < 13; cont2++)
				{
					if (*(a + (cont1 - 1)) == array[cont2])
					{
						*(a + cont1) = (*(a + cont1)) - 32;
					}
				}
			}
		}
		cont1++;
	}
	*(a + cont1) = '\0';
	return (a);
}
