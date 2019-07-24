#include "function_pointers.h"
/**
 * int_index - function that search for a integer
 * @array: input char
 * @size:  size of the array
 * @cmp: function pointer, depending of the function
 * choose search for 98, abs(98), or if num is bigger than 0
 * Return: -1 if fails or index if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = -1;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				break;
		}
	}
	if (res == 1)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
