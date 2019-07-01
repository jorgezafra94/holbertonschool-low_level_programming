#include "holberton.h"
/**
 * swap_int - change the value of n into 98
 * @a: input pointer num1
 * @b: inout pointer num2
 * Return: the swap value
 */
void swap_int(int *a, int *b)
{
	int var1;

	var1 = *a;
	*a = *b;
	*b = var1;
}
