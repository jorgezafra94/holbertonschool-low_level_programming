#include "holberton.h"
/**
 * print_numbers - check if a letter is uppercase
 * Return: the respective value if is a digit or not
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
