#include "search_algos.h"
/**
 * linear_search - using linear search in order to get
 * the speficied value
 * @array: array sent
 * @size: size of array
 * @value: value to search inside the array
 * Return: value or -1 if not in the array
 */
int linear_search(int *array, size_t size, int value)
{
	int c = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; c < (int)size; c++)
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
	if (c >= (int)size)
	{
		return (-1);
	}
	printf("Value checked array[%i] = [%i]\n", c, array[c]);
	return (c);
}
