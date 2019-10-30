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
 * part_hoare - fin the partition position or pivot of the array
 * @array: array to sort
 * @first: lowest position
 * @last: highest position
 * @size: size of array
 * Return: pivot index
 */
int part_hoare(int *array, int first, int last, size_t size)
{
	int pivot = array[last];
	int i = first - 1;
	int j = last + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i > j)
			return (j);
		if (array[i] > array[j])
			swap(array, i, j, size);
	}
}

/**
 * sorting_hoare - sorts an array of integers in ascending order
 * @array: array to sort
 * @first: lowest position
 * @last: highest position
 * @size: size of array
 */
void sorting_hoare(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = part_hoare(array, first, last, size);
		sorting_hoare(array, first, pivot, size);
		sorting_hoare(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort_hoare -  sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort_hoare(int *array, size_t size)
{
	int last = size - 1;

	if (!array || size == 1)
		return;

	sorting_hoare(array, 0, last, size);
}
