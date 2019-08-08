#include "holberton.h"
/**
 * set_bit - set 1 in the specified bit in a binary
 * @n: number in decimal
 * @index: position that starts in 0
 * Return: 1 if it works or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int aux = 1;

	if (index > 63)/*evaluate if the index is bigger than amount numbers*/
	{
		return (-1);
	}
	for (; i < index; i++)
		aux = aux << 1;
	*n = *n | aux;
	return (1);
}
