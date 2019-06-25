#include "holberton.h"
/**
 * print_last_digit - give you the last digit of a  number
 * @y: get the input
 * Return: the last digit
 */
int print_last_digit(int y)
{
	y = y % 10;

	if (y < 0)
	{
		y = y * (-1);

	}

	_putchar('0' + y);

	return (y);
}
