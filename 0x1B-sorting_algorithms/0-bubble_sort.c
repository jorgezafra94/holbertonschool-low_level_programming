#include "sort.h"
/**
 * bubble_sort - function that sorts an array using bubble sorting
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int cont = 1, aux = 0;
	size_t i;

	while (cont != 0)
	{
		cont = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				cont++;
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
