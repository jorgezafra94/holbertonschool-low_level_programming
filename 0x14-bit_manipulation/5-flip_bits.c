#include "holberton.h"
/**
 * flip_bits - search if a number is different from other
 * and returns how many change need to do to get the other number
 * @n: number to change
 * @m: number to get
 * Return: number of bits or 0 if there are the same
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cont = 0;
	int ver1, ver2, i;

	for (i = 63; i >= 0; i--)
	{
		ver1 = n & 1;
		n = n >> 1;
		ver2 = m & 1;
		m = m >> 1;

		if (!(ver1 == ver2))
			cont++;
	}
	return (cont);
}
