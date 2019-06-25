#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98  - give you the secuence fron n number to 98
 * @n: input variable
 * Return : 0 success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		if (n > 98)
		{
			while (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
			printf("%d\n", n);
		}
		else
		{
			printf("%d\n", n);
		}
	}
}
