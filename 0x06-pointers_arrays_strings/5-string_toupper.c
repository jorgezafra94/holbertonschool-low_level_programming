#include "holberton.h"

/**
 * string_toupper - change all lowercase letter into uppercase
 * @a: an array of chars
 * Return: return an array in uppercase
 */
char *string_toupper(char *a)
{
	int cont1 = 0;

	while (*(a + cont1) != '\0')
	{
		if (*(a + cont1) >= 97 && *(a + cont1) <= 122)
		{
			*(a + cont1) = (*(a + cont1)) - 32;
		}
		cont1++;
	}
	return (a);
}
