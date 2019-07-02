#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - give you the half of the string
 * @str: input
 * Return: the half of a string
 */
void puts_half(char *str)
{
	int cont1 = 0, cont2 = 0;

	while (*(str + cont1) != '\0')
	{
		cont1++;
	}
	if ((cont1 % 2) == 0)
		cont2 = cont1 / 2;
	else
		cont2 = ((cont1 - 1) / 2) + 1;

	while (cont1 > cont2)
	{
		_putchar(*(str + cont2));
		cont2++;
	}
	_putchar('\n');
}
