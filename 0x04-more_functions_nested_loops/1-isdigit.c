#include "holberton.h"
/**
 * _isdigit - check if a letter is uppercase
 * @c: input
 * Return: the respective value if is a digit or not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
