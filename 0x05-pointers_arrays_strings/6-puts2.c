#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - give you the even locations characters
 * @str: input of a string
 * Return: the values in even locations
 */
void puts2(char *str)
{
	int cont1 = 0;

	while (*(str + cont1) != '\0')
	{
		if ((cont1 % 2) == 0)
			_putchar(cont1 + '0');
		cont1++;
	}
	_putchar('\n');
}
