#include "sort.h"
/**
 * shell_sort - sort the array using shell method and knuth sequence
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	int h = 1, i, j;
	int aux = 0;

	while (h < ((int)(size)))
	{
		h = (3 * h) + 1;
	}
	h = (h - 1) / 3;
	while (h > 0)
	{
		for (i = h; i < (int)(size); i++)
		{
			for (j = i; (j - h) >= 0 && array[j] < array[j - h]; j -= h)
			{
				aux = array[j];
				array[j] = array[j - h];
				array[j - h] = aux;
			}
		}
		print_array(array, size);
		h = (h - 1) / 3;
	}
}
