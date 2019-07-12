#include "holberton.h"
/**
 * _puts - give you the string
 * @s: input of a string
 * Return: the string
 */
void _puts(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
	{
		_putchar(*(s + cont));
		cont++;
	}
	_putchar('\n');
}
