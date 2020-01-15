#include "search_algos.h"
#include <math.h>

/**
 * search - goes through the linked list from one point to other
 * in order to get the value
 * @prev: prev pointer
 * @actual: actual pointer
 * @value: value to search
 * Return: Node where the value is or NULL if the value couldn't be find
 */
listint_t *search(listint_t *prev, listint_t *actual, int value)
{
	while (prev && prev->index <= actual->index)
	{
		printf("Value checked at index [%lu] = [%i]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
/**
 * jump_list - jump search algorithm with linked list
 * @list: list to search the value
 * @size: size of linked list
 * @value: value to search
 * Return: Node where the value is or NULL if the value couldn't be find
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int paso, count = 0;
	listint_t *actual, *prev;
	size_t pre_i, act_i;

	if (list == NULL)
		return (NULL);
	paso = sqrt((int)size);
	actual = prev = list;
	while (actual->next)
	{
		prev = actual;
		pre_i = prev->index;
		act_i = actual->index;
		while (count != paso && actual->next)
		{
			actual = actual->next;
			count++;
		}
		count = 0;
		if (actual)
		{
			act_i = actual->index;
			printf("Value checked at index [%lu] = [%i]\n", act_i, actual->n);
			if (prev->n > value && prev->index == 0)
				return (NULL);
			else if (actual->n >= value)
				break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", pre_i, act_i);
	return (search(prev, actual, value));
}
