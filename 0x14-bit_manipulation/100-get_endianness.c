#include "holberton.h"
/**
 * get_endianness - we will know if this pc is big endian or little endian
 * Return: 0 if it is big endian or 1 if it's litle endian
 */
int get_endianness(void)
{
	int num = 1, endianness;

	endianness = num >> sizeof(int);
	endianness = endianness & 1;

	if (endianness == 0)
		return (1);
	else
		return (0);
}
