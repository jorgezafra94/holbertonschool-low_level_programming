#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the matrix
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int num = 0, i, j;
	unsigned int sum1 = 0, sum2 = 0;

	num = (size * size) - 1;

	for (i = 0; i <= num; i = i + (size + 1))
	{
		sum1 = sum1 + *(a + i);
	}
	for (j = (size - 1); j < num; j = j + (size - 1))
	{
		sum2 = sum2 + *(a + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
