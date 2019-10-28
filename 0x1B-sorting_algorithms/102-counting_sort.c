#include "sort.h"
/**
 * _calloc - allocates memory for an array of n elements of certain size.
 * @nmemb: number of elements to be allocated.
 * @size: size of elements.
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_as = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_as = malloc(nmemb * size);
	if (mem_as == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		mem_as[i] = 0;
	}
	return (mem_as);
}

/**
 * counting_sort - sorts an array of integers in ascending order using the
 * Counting sort algorithm
 * @array: array of integers
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	int large = 0, j, idx, num;
	int *index_arr, *aux_arr;
	size_t i;

	if (!array || size == 1)
		return;
	for (i = 0; i < size; i++)
		if (large < array[i])
			large = array[i];
	index_arr = _calloc(large + 1, sizeof(int));
	for (i = 0; i < size; i++)
	{
		idx = array[i];
		index_arr[idx] += 1;
	}
	for (j = 1; j <= large; j++)
		index_arr[j] += index_arr[j - 1];
	print_array(index_arr, large + 1);
	aux_arr = malloc(size * sizeof(int));
	if (aux_arr == NULL)
	{
		free(index_arr);
		return;
	}
	for (i = 0; i < size; i++)
	{
		num = array[i];
		idx = index_arr[array[i]] - 1;
		index_arr[array[i]] -= 1;
		aux_arr[idx] = num;
	}
	for (i = 0; i < size; i++)
	{
		array[i] = aux_arr[i];
	}
	free(index_arr);
	free(aux_arr);
}
