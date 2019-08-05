#include "lists.h"
/**
 * print_listint - print the element of the linked list
 * @h: linked list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int cont = 0;

	if (!h)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	if (h->next == NULL)
	{
		cont++;
		printf("%d\n", h->n);
	}
	return (cont);

}
