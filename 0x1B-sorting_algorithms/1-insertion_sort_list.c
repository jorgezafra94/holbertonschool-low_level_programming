#include "sort.h"
/**
 * first_swap - look for a minor value of a node inside the list where
 * the current node is bigger, in order to change positions
 * @list: list to sort
 * Return: the node that has the first lower value, which we did the swap
 */
listint_t *first_swap(listint_t **list)
{
	listint_t *cursor;
	listint_t *next;
	listint_t *prev;
	listint_t *n_n;

	for (cursor = *list; cursor->next != NULL; cursor = cursor->next)
	{
		if (cursor->n > cursor->next->n)
		{
			next = cursor->next;
			prev = cursor->prev;
			n_n = next->next;
			cursor->next = n_n;
			cursor->prev = next;
			if (prev)
				prev->next = next;
			next->prev = prev;
			next->next = cursor;
			if (n_n)
				n_n->prev = cursor;
			cursor = cursor->prev;
			if (cursor->prev == NULL)
				*list = cursor;
			print_list(*list);
			break;
		}
	}
	return (cursor);
}
/**
 * backward - it a loop from current node where we find the swap to head
 * in order to find if there is a node with a minor value that the current
 * node.
 * @elem: node where we did the swap
 * @list: list to sort
 * Return: 0 if in the first_swap the node went till the tail.
 * 1 if the node didnt went till the tail, but there is no more
 * minor value than the current node inside the list
 * 2 if there was more minor values and the value was the lower inside the
 * list.
 */
int backward(listint_t **elem, listint_t **list)
{
	listint_t *cursor, *next, *prev, *p_p;
	int a;

	if ((*elem)->next == NULL)
		a = 0;
	else
		a = 1;
	for (cursor = *elem; cursor && cursor->prev; cursor = cursor->prev)
	{
		if (cursor->n < cursor->prev->n)
		{
			next = cursor->next;
			prev = cursor->prev;
			p_p = prev->prev;
			cursor->next = prev;
			cursor->prev = p_p;
			if (p_p)
				p_p->next = cursor;
			if (next)
				next->prev = prev;
			prev->next = next;
			prev->prev = cursor;
			cursor = cursor->next;
			if (cursor->prev->prev != NULL)
				print_list(*list);
			else
				a = 2;
		}
	}
	*elem = cursor;
	return (a);
}
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: unsorted list of integers
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cursor;
	int cont = 1;

	if (list == NULL || *list == NULL)
		return;

	while (cont != 0)
	{
		cont = 0;
		cursor = first_swap(list);
		if (cursor->next != NULL)
			cont = 1;
		cont = backward(&cursor, list);
		if (cursor->prev == NULL)
		{
			*list = cursor;
			if (cont != 0 && cont != 1)
				print_list(*list);
		}
	}
}
