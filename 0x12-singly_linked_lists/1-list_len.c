#include "lists.h"
/**
 * list_len - print all the elements of the linked list
 * @h :linked list
 * Return: return the number of elements
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);

	for (; h->next != NULL; c++)/*search if the pointer is null*/
	{
		h = (*h).next;/*change the pointer into the next one*/
	}
	if (h->next == NULL)
		c++;
	return (c);
}
