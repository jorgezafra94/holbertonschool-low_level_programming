#include "holberton.h"
/**
 * clear_bit - set 0 in the specified bit in a binary
 * @n: number in decimal
 * @index: position that starts in 0
 * Return: 1 if it works or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int aux = 1;

	if (index > 63)/*evaluate if the index is bigger than amount numbers*/
	{
		return (-1);
	}
	for (i = 63; (int)i >= 0; i--)
	{
		if (i == index)
			aux = aux << 1;
		else
			aux = (aux << 1) | 1;
	}
	*n = *n & aux;
	return (1);
}
