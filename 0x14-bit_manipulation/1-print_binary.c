#include "holberton.h"
/**
 * print_binary - print the result of convert a number into binary
 * @n: number in decimal
 */
void print_binary(unsigned long int n)
{
	int aux;

	if (n == 0)
	{
		_putchar ('0');
	}
	else
	{
		aux = n & 1;
		n = n >> 1;
		if (!(n == 0))
			print_binary(n);
		_putchar(aux + '0');
	}
}
