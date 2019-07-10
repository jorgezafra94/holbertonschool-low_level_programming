#include "holberton.h"
/**
 * _puts_recursion - prints the strings
 * @s: string input
 */
void _puts_recursion(char *s)
{
	if (*(s + 0) != '\0')
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
