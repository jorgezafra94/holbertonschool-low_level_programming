#include "sort.h"
/**
 * printarr - print the array sent
 * @array: array
 * @begin: begin of the array
 * @end: end of the array
 */
void printarr(int *array, int begin, int end)
{
	int i;
	char *sep;

	sep = "";
	for (i = begin; i < end; i++)
	{
		printf("%s%d", sep, array[i]);
		sep = ", ";
	}
	printf("\n");
}
/**
 * sortup - sorts in increasing way
 * @array: array to sort
 * @begin: begin position of the array
 * @size: last position + 1 of the array
 */
void sortup(int *array, int begin, int size)
{
	int j, cont = begin, pos;
	int aux, flag = 0, value;

	while (cont < size)
	{
		pos = cont;
		value = array[cont];
		for (j = cont; j < size; j++)
		{
			if (value > array[j])
			{
				flag = 1;
				value = array[j];
				pos = j;
			}
		}
		if (flag == 1)
		{
			aux = array[cont];
			array[cont] = value;
			array[pos] = aux;
		}
		cont++;
		flag = 0;
	}
	printarr(array, begin, size);
}
/**
 * sortdown - sorts in a decreasing way
 * @array: array to sort
 * @begin: initial position
 * @size: last position + 1 of the array
 */
void sortdown(int *array, int begin, int size)
{
	int j, cont = begin, pos;
	int aux, flag = 0, value;

	while (cont < size)
	{
		pos = cont;
		value = array[cont];
		for (j = cont; j < size; j++)
		{
			if (value < array[j])
			{
				flag = 1;
				value = array[j];
				pos = j;
			}
		}
		if (flag == 1)
		{
			aux = array[cont];
			array[cont] = value;
			array[pos] = aux;
		}
		cont++;
		flag = 0;
	}
	printarr(array, begin, size);

}
/**
 * sorting - partion of the arrays
 * @array: array
 * @begin: initial position
 * @end: last position + 1 of the array
 * @bool: 0 or 1 to know if its Up or Down
 * @size: size of the original array
 */
void sorting(int *array, int begin, int end, int bool, int size)
{
	char *dir;

	if (end - begin < 2)
		return;

	if (bool == 0)
		dir = "UP";
	else
		dir = "DOWN";
	printf("Merging [%d/%d] (%s):\n", (end - begin), size, dir);
	printarr(array, begin, end);

	if  (end - begin == 2)
		return;

	sorting(array, begin, (begin + end) / 2, 0, size);
	printf("Result [%d/%d] (UP):\n", (((end + begin) / 2) - begin), size);
	sortup(array, begin, (begin + end) / 2);

	sorting(array, (begin + end) / 2, end, 1, size);
	printf("Result [%d/%d] (DOWN):\n", (((end + begin) / 2) - begin), size);
	sortdown(array, (begin + end) / 2, end);

}
/**
 *bitonic_sort - sort using bitonic way
 *@array: array to sort
 *@size: size of array
 */
void bitonic_sort(int *array, size_t size)
{
	if (!array || size <= 1)
	{
		return;
	}
	sorting(array, 0, size, 0, (int)size);
	printf("Result [%ld/%ld] (UP):\n", size, size);
	sortup(array, 0, (int)size);

}
