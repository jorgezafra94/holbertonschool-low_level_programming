#include "sort.h"

/**
 * swap_backward - swap next node and actuall
 * @cursor: current node position
 * @list: list to sort
 */
void swap_backward(listint_t **cursor, listint_t **list)
{
	listint_t *current, *next, *prev, *p_p;

	current = *cursor;
	prev = current->prev;
	next = current->next;
	p_p = prev->prev;
	current->next = prev;
	current->prev = p_p;

	prev->next = next;
	next->prev = prev;
	prev->prev = current;
	if (p_p)
		p_p->next = current;
	if (current->prev == NULL)
		*list = current;
	current = current->next;
	print_list(*list);
	*cursor = current;
}

/**
 * swap_forward - swap next node and actuall
 * @cursor: current node position
 * @list: list to sort
 */
void swap_forward(listint_t **cursor, listint_t **list)
{
	listint_t *current, *next, *prev, *n_n;

	current = *cursor;
	next = current->next;
	prev = current->prev;
	n_n = next->next;
	current->next = n_n;
	current->prev = next;
	if (prev)
		prev->next = next;
	next->prev = prev;
	next->next = current;
	if (n_n)
		n_n->prev = current;
	current = current->prev;
	if (current->prev == NULL)
		*list = current;
	print_list(*list);
	*cursor = current;
}

/**
 * cocktail_sort_list - function that sorts a linked list using coctail
 * @list: pointer to first node in linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *cursor;
	int cont = 1;

	if (list == NULL || *list == NULL)
		return;

	while (cont != 0)
	{
		cont = 0;
		for (cursor = *list; cursor->next != NULL; cursor = cursor->next)
		{
			if (cursor->n > cursor->next->n)
			{
				swap_forward(&cursor, list);
				cont++;
			}
		}
		for (; cursor->prev != NULL; cursor = cursor->prev)
		{
			if (cursor->n < cursor->prev->n)
			{
				swap_backward(&cursor, list);
				cont++;
			}
		}
	}
}
