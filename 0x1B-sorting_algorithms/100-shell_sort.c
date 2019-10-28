#include "sort.h"
/**
 * shell_sort - sort the array using shell method and knuth sequence
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 1, i, j;
	int aux = 0;

	while (h < (size / 3))
	{
		h = (3 * h) + 1;
	}
	while (h > 0)
	{
		for (i = 0; (i + h) < size; i++)
		{
			for (j = i + h; array[j] < array[j - h]; j -= h)
			{
				aux = array[j];
				array[j] = array[j - h];
				array[j - h] = aux;
			}
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
