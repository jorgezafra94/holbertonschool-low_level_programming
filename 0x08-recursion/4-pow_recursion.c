#include "holberton.h"
/**
 * _pow_recursion - gives the pow of two numbers
 * @x: number 1
 * @y: pow
 * Return: number pow y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		--y;
		return (x * _pow_recursion(x, y));
	}
}
