#include "sort.h"
/**
 * cifra - function that return the value of the less significant digit
 * depending of var.
 * @var: LSD 1, 2, 3..etc
 * @value: value in the array
 * Return: the digit in the var position
 */
int cifra(int value, int var)
{
	int i;

	for (i = 0; i < var - 1; i++)
	{
		value = value / 10;
	}
	value = value % 10;
	return (value);
}
/**
 * radix_function - sort the array using a copy
 * @array: array to sort
 * @copy: copy of array
 * @var: LSD, position of digit
 * @size: size of array
 */
void radix_function(int *array, int var, int size, int *copy)
{
	int min = 10, i, k = 0, valor = 0, j;

	for (i = 0; i < (int)size; i++)
	{
		valor = cifra(array[i], var);
		if (valor < min)
			min = valor;
	}

	for (i = min; i < 10; i++)
	{
		for (j = 0; j < (int)size && k < (int)size; j++)
		{
			valor = cifra(array[j], var);
			if (valor == i)
			{
				copy[k] = array[j];
				k++;
			}
		}
	}
	for (i = 0; i < (int)size; i++)
	{
		array[i] = copy[i];
	}
	print_array(array, size);
}
/**
 * radix_sort - sort an array using radix algorithm
 * @array: array to sort
 * @size: size of array
 */
void radix_sort(int *array, size_t size)
{
	int max = 0, i, *copy, num = 1, var = 1;

	if (!array || size == 1)
		return;

	copy = malloc(sizeof(int) * (size - 1));
	if (!copy)
		return;
	for (i = 0; i < (int)size; i++)
	{
		copy[i] = array[i];

		if (array[i] > max)
			max = array[i];
	}
	while (max > 9)
	{
		max = max / 10;
		num++;
	}
	for (i = 0; i < num; i++, var++)
	{
		radix_function(array, var, size, copy);
	}
	free(copy);
}
