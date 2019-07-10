#include "holberton.h"
/**
 * _strlen_recursion - gives lenght of string
 * @s: string input
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
