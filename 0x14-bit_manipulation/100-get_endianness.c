#include "holberton.h"
/**
 * get_endianness - we will know if this pc is big endian or little endian
 * Return: 0 if it is big endian or 1 if it's litle endian
 */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *)&num;

	/*printf("esta es la dir %s", c);*/
	if (c == NULL)
		return (0);
	else
		return (1);
}
