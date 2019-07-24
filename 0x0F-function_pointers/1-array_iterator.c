#include "function_pointers.h"
/**
 * array_iterator - print elements in dec or in hex
 * @array: input char
 * @size: function pointer
 * @action: function pointer, depending of the input choose dec or hex
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
