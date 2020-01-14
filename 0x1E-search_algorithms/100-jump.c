#include "search_algos.h"
#include <math.h>
/**
 * linear_search_mod - using linear search in order to get
 * the speficied value
 * @begin: first position to evaluate
 * @last: last position to evaluate
 * @value: value to search inside the array
 * @array: array to search
 * Return: value or -1 if not in the array
 */
int linear_search_mod(int begin, int last, int value, int *array)
{
	int c = begin;

	for (; c <= last; c++)
	{
		if (value == array[c])
		{
			break;
		}
		else
		{
			printf("Value checked array[%i] = [%i]\n", c, array[c]);
		}
	}
	if (c > last)
	{
		return (-1);
	}
	printf("Value checked array[%i] = [%i]\n", c, array[c]);
	return (c);
}
/**
 * jump_search - use jump search algorithm in order to get
 * the value specified, here you have to you sqrt function
 * to get the pace
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index or -1 if it is not inside the array
 */
int jump_search(int *array, size_t size, int value)
{
	int prev = 0, actual, paso;

	if (array == NULL)
		return (-1);

	paso = sqrt((int)size);

	for (actual = paso; actual < (int)size; actual += paso)
	{
		prev = actual - paso;
		if (array[prev] > value && prev == 0)
		{
			printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
			return (-1);
		}
		else if (array[actual] >= value)
		{
			printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
			break;
		}
		else
			printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
	}

	if (actual >= (int)size)
	{
		prev = actual - paso;
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		printf("Value found between indexes [%i] and [%i]\n", prev, actual);
		return (linear_search_mod(prev, size - 1, value, array));
	}

	printf("Value found between indexes [%i] and [%i]\n", prev, actual);
	return (linear_search_mod(prev, actual, value, array));
}
