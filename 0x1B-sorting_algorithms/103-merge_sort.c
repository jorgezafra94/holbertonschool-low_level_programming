# include "sort.h"
/**
 * merging - merge the values in the position of array and copy
 * @array: first array
 * @copy: copy of array, and second array
 * @posi: initial position
 * @middle: middle position the final + 1 of the first array and the
 * first one of the second array
 * @size: size of second array
 */
void merging(int *array, int posi, int middle, int size, int *copy)
{
	int i, j, k;

	i = posi;
	j = middle;
	printf("Merging...\n");
	printf("[left]: ");
	for (k = i; k < j; k++)
	{
		if (k != j - 1)
			printf("%d, ", array[k]);
		else
			printf("%d\n", array[k]);
	}
	printf("[right]: ");
	for (k = j; k < size; k++)
	{
		if (k != size - 1)
			printf("%d, ", array[k]);
		else
			printf("%d\n", array[k]);
	}
	printf("[Done]: ");
	for (k = i; k < size; k++)
	{
		if (i < middle && (j >= size || array[i] <= array[j]))
		{
			copy[k] = array[i];
			i++;
		}
		else
		{
			copy[k] = array[j];
			j++;
		}
		if (k != size - 1)
			printf("%d, ", copy[k]);
		else
			printf("%d\n", copy[k]);

	}
}
/**
 * partition - separate the array
 * @copy: copy of array
 * @posi: initial position
 * @size: size of array
 * @array: original array
 */
void partition(int *copy, int posi, int size, int *array)
{
	int middle;

	if (size - posi < 2)
		return;

	middle = (size + posi) / 2;

	partition(array, posi, middle, copy);
	partition(array, middle, size, copy);

	merging(copy, posi, middle, size, array);
}
/**
 * merge_sort - create the copy and send to partition
 * @array: array
 * @size : size of array
 */
void merge_sort(int *array, size_t size)
{
	int *copy, i;

	copy = malloc(sizeof(int) * size - 1);

	if (!copy)
		return;

	for (i = 0; i < (int)size; i++)
		copy[i] = array[i];

	partition(copy, 0, size, array);
	free(copy);
}
