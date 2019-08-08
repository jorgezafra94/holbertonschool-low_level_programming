#include "holberton.h"
/**
 * get_bit - search the bit in a binary
 * @n: number in decimal
 * @index: position that starts in 0
 * Return: the bit in the index specified
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int aux = 0;

	if (index > 63)/*evaluate if the index is bigger than amount numbers*/
	{
		return (-1);
	}
	for (; i < index; i++) /*go through the numbers*/
		n = n >> 1;
	aux = n & 1;/*get the bit in index number*/
	return (aux);
}
