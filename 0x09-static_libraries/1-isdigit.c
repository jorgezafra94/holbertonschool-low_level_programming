#include "holberton.h"
/**
 * _isdigit - check if is a number between 0 - 9
 * @c: input
 * Return: the respective value if is a digit or not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
