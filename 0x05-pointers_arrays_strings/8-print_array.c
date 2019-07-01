#include "holberton.h"
#include <stdio.h>
/**
 * print_array - give you n elemnts of an array
 * @a: array
 * @n: position
 * Return: return all the values of array until the n value
 */
void print_array(int *a, int n)
{
	int cont = 0;

	for (; cont <= (n-1); cont++)
	{
		if(!(cont == (n-1)))
			printf("%d, ", *(a + cont));
		else
			printf("%d\n", *(a + cont));
	}
}
