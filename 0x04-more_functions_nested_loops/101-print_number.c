#include "holberton.h"
/**
 * print_number - print the number
 * @n: input
 * Return: return the number
 */
void print_number(int n)
{
	int i, j, cont = 1, var1;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	for (i = 10; i <= n; i = i * 10)
	{
		cont++;
	}
	i = i / 10;
	for (j = 1; j <= cont; j++)
	{
		var1 = n / i;
		n = n % i;
		i = i / 10;
		_putchar ('0' + var1);
	}
}
