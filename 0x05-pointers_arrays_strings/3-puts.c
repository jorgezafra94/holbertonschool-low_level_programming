#include "holberton.h"
/**
 * _puts - give you the string
 * @str: input of a string
 * Return: the string
 */
void _puts(char *str)
{
	int cont = 0;

	while (*(str + cont) != '\0')
	{
		_putchar(*(str + cont));
		cont++;
	}
	_putchar('\n');
}
