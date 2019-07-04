#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - gives the revers form of an integer array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int u, cont1 = 0, vari, varf;

	u = n - 1;
	while (u >= 0)
	{
		if (cont1 <= u)
		{
			vari = *(a + cont1);
			varf = *(a + u);
			*(a + cont1) = varf;
			*(a + u) = vari;
		}
		cont1++;
		u--;
	}
}
