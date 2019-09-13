#include "lists.h"
/**
 *dlistint_len - print the elements in the doubly link list
 *@h: double linked list
 *Return: number of elements inside the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;

	if (h == NULL)
		return (elem);

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		h = h->next;
		elem += 1;
	}
	return (elem);
}
