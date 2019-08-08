#include "holberton.h"
/**
 * binary_to_uint - converts a binary number into unisgned int
 * @b: string that contains the binary number
 * Return: a number with unsigned int type
 */
unsigned int binary_to_uint(const char *b)
{
	int cont = 0, i, j;
	unsigned int sum = 0, bin = 2;

	if (b == NULL)
		return (0);
	while (b[cont] != '\0')
	{
		if (b[cont] != '1' && b[cont] != '0')
			return (0);
		cont++;
	}
	for (i = cont - 1, j = 0; i >= 0; i--, j++)
	{
		if (j == 0)
			sum = sum + (b[i] - '0');
		else
		{
			sum = sum + ((b[i] - '0') * bin);
			bin = bin * 2;
		}
	}
	return (sum);
}
