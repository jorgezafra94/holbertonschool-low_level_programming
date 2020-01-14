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
 * exponential_search - using exponential search in order to get
 * the speficied value also it use binary search.
 * @array: array sent
 * @size: size of array
 * @value: value to search inside the array
 * Return: index or -1 if not in the array
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, low, high;

	if (array == NULL || (int)size == 0)
	{
		return (-1);
	}

	while (bound < (int)size && array[bound] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	if (bound < (int)size - 1)
		high = bound;
	else
		high = (int)size - 1;
	printf("Value found between indexes [%i] and [%i]\n", low, high);

	return (recursion(low, high, array, value, (int)size));
}
