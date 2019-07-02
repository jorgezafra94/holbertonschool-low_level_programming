#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - give you the even locations characters
 * @str: input of a string
 * Return: the values in even locations
 */
void puts2(char *str)
{
	int cont1 = 0, cont2 = 0;

	while (*(str + cont1) != '\0')
	{
		cont1++;
	}
	while (cont2 < cont1)
	{
		_putchar(*(str + cont2));
		cont2 = cont2 + 2;
	}
	_putchar('\n');
}
