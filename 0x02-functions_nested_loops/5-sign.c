#include "holberton.h"
#include <unistd.h>
/**
 * print_sign - check if the input is positive, negative or zero
 * @n: the variable to check
 * Return: 0 if the num is 0, + if is positive and - if its negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
