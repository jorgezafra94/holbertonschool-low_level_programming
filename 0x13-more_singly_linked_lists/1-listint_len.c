#include "lists.h"
/**
 * listint_len - return numbers elements of the linked list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int cont = 0;

	if (!h)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		h = h->next;
		cont++;
	}
	if (h->next == NULL)
	{
		cont++;
	}
	return (cont);

}
