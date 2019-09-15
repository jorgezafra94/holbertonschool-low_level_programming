#include "lists.h"
/**
 *insert_dnodeint_at_index - insert node into a doubly linked list
 *@h: doubly linked list
 *@idx: position to store the value
 *@n: value to store
 *Return: doubly linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *aux = NULL;
	unsigned int num = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}
	for (aux = *h; aux; num++, aux = aux->next)
		;
	if (idx == num)
	{
		temp = add_dnodeint_end(h, n);
		return (temp);
	}
	if (idx > num)
		return (NULL);
	aux = *h;
	num = 0;
	while (aux && aux->next)
	{
		if (idx == num)
		{
			temp = malloc(sizeof(dlistint_t));
			if (!temp)
				return (NULL);
			temp->n = n;
			temp->next = aux;
			temp->prev = aux->prev;
			temp->prev->next = temp;
			temp->next->prev = temp;
			return (temp);
		}
		num++;
		aux = aux->next;
	}
	return (NULL);
}
