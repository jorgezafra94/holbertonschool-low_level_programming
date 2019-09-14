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
	dlistint_t *temp, *aux;
	unsigned int num = 0;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	if (idx == 0)
	{
		temp = add_dnodeint_end(h, n);
		return (temp);
	}
	aux = *h;
	temp->n = n;
	while (aux->prev != NULL)
		aux = aux->prev;
	while (aux->next)
	{
		if (num == idx)
		{ temp->next = aux, temp->prev = aux->prev;
			if (idx == 0)
				aux->prev = temp, *h = temp;
			else
				(aux->prev)->next = temp, aux->prev = temp;
			return (temp);
		}
		num++, aux = aux->next;
	}
	num++;
	if (num == idx)
	{ temp->next = NULL, temp->prev = aux, aux->next = temp;
		return (temp);
	}
	return (NULL);
}
