#include "sort.h"

/**
 * swap - change position between two position of an array and print the array
 * @array: array to sort
 * @first: lowest position
 * @last: highest position
 * @size: size of array
 */
void swap(int *array,  int first, int last, size_t size)
{
	int aux, value;

	value = array[first];
	aux = array[last];
	array[last] = value;
	array[first] = aux;
	print_array(array, size);
}
/**
 * part - fin the partition position or pivot of the array
 * @array: array to sort
 * @first: lowest position
 * @last: highest position
 * @size: size of array
 * Return: pivot index
 */
int part(int *array, int first, int last, size_t size)
{
	int pivot = array[last];
	int i = first - 1;
	int j;

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i < j)
				swap(array, i, j, size);
		}
	}
	if (array[i + 1] > array[last])
		swap(array, i + 1, last, size);
	return (i + 1);
}

/**
 * sorting - sorts an array of integers in ascending order
 * @array: array to sort
 * @first: lowest position
 * @last: highest position
 * @size: size of array
 */
void sorting(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = part(array, first, last, size);
		sorting(array, first, pivot - 1, size);
		sorting(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using the Quick
 * sort algorithm using Lomuto partition scheme
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int last = size - 1;

	sorting(array, 0, last, size);
}
