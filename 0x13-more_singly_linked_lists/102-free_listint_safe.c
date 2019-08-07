#include "lists.h"
/**
 * free_listint_safe - free a linked list safe.
 * @h: linked  list.
 * Return: number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listp_t *a, *b, *t;
	listint_t *f;

	f = *h;
	a = NULL;
	for (; *h != NULL; c++)
	{
		t = malloc(sizeof(listp_t));
		if (!t)
			exit(98);
		t->p = *h;
		t->next = a;
		a = t;
		b = a->next;
		f = *h;
		while (b != NULL)
		{
			if (*h == b->p)
			{
				free_listp(a);
				*h = NULL;
				return (c);
			}
			b = b->next;
		}
		*h = (*h)->next;
		free(f);
	}
	free_listp(a);
	return (c);
}
