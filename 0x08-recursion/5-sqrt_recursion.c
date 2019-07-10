#include "holberton.h"

/**
 * fun1 - return the sqrt of a num
 * @num: input
 * @s: initial num
 * Return: the sqrt num
 */
int fun1(int num, int s)
{
	if ((s * s) == num)
		return (s);
	else
	{
		if (s * s > num)
			return (-1);
		else
			return(fun1(num, s + 1));
	}
}

/**
 * _sqrt_recursion - gives the square of a  number if exist
 * @n: number
 * Return: the square of or -1 if not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return(fun1 (n, 0));
}
