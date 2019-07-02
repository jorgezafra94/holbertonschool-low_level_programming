#include "holberton.h"
/**
 * print_rev - give you the string in reverse form
 * @s: input of a string
 * Return: the string in reverse form
 */
void print_rev(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
	{
		cont++;
	}
	while (cont > 0)
	{
		_putchar(*(s + (cont - 1)));
		cont--;
	}
	_putchar('\n');
}
