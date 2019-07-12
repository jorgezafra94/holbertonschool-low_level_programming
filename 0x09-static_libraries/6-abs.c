#include "holberton.h"
/**
 * _abs - give you the absolute value of a number
 * @n: get the input
 * Return: the positive number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
