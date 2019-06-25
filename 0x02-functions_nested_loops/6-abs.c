#include "holberton.h"
/**
 * _abs - give you the absolute value of a number
 * @x: get the input
 * Return: the positive number
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		x = x * (-1);
		return (x);
	}
}
