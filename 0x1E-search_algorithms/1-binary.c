#include "search_algos.h"
/**
 * recursion - using recursion to divide and conquer
 * @begin: first position of array
 * @last: last position of array
 * @array: array sent
 * @value: value to search inside the array
 * @size: size of original array
 * Return: index or -1 if not in the array
 */
int recursion(int begin, int last, int *array, int value, int size)
{
	int c = begin, mid;
	char *aux;

	printf("Searching in array: ");
	aux = "";
	for (; c <= last; c++)
	{
		printf("%s%i", aux, array[c]);
		aux = ", ";
	}
	printf("\n");
	mid = (begin + last) / 2;
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] > value)
	{
		last = mid - 1;
		if (last < 0)
			return (-1);
		return (recursion(begin, last, array, value, size));
	}
	else
	{
		begin = mid + 1;
		if (begin == size)
			return (-1);
		return (recursion(begin, last, array, value, size));
	}
}
/**
 * binary_search - using binary search in order to get
 * the speficied value
 * binary search uses divide and conquer logic
 * @array: array sent
 * @size: size of array
 * @value: value to search inside the array
 * Return: index or -1 if not in the array
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	return (recursion(0, ((int)size) - 1, array, value, (int)size));
}
