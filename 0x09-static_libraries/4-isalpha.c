#include "holberton.h"
/**
 * _isalpha - writes if the character is a letter
 * @c: the variable to check
 * Return: 0 if is not a letter 1 if it is
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
