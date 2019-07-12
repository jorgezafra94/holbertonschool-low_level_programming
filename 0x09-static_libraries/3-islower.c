#include "holberton.h"
/**
 * _islower - writes the character is lowercase
 * @c: the variable to check
 * Return: 0 if is not a lowercase 1 if it is
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
