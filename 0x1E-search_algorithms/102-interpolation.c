#include "search_algos.h"
/**
 * interpolation_search - using interpolation search in order to get
 * the speficied value
 * @array: array sent
 * @size: size of array
 * @value: value to search inside the array
 * Return: index or -1 if not in the array
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l = 0, h = (int)size - 1;
	double resul;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	while ((array[h] != array[l]))
	{
		resul = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		mid = (size_t)resul;
		if (mid >= size || resul < 0)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
		if (array[mid] < value)
			l = mid + 1;

		else if (array[mid] > value)
			h = mid - 1;

		else
			return (mid);
	}

	if (value == array[l])
		return (l);
	else
		return (-1);
}
