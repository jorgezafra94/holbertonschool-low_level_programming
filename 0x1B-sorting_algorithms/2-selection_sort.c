#include "sort.h"
/**
 * selection_sort - sorting algorithm that sorts in selction form
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t j, cont = 0, pos;
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
			print_array(array, size);
		}
		cont++;
		flag = 0;
	}
}
