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

	if (last < begin)
		return (-1);
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
		if (begin != mid)
			return (recursion(begin, mid, array, value, size));
		return (begin);
	}
	else if (array[mid] > value)
	{
		last = mid - 1;
		if (last < 0)
			return (-1);
		return (recursion(begin, mid, array, value, size));
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
 * advanced_binary - using binary search in order to get
 * the speficied value
 * binary search uses divide and conquer logic
 * in this algorithm we search the first element with the value
 * not the first that the algorithm found
 * @array: array sent
 * @size: size of array
 * @value: value to search inside the array
 * Return: index or -1 if not in the array
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (recursion(0, ((int)size) - 1, array, value, (int)size));
}
