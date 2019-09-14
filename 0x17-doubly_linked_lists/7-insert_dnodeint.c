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

	if (!(h == NULL || (*h == NULL && idx != 0)))
	{
		if (idx == 0)
			temp = add_dnodeint(h, n);
		else
		{
			temp = malloc(sizeof(dlistint_t));
			if (!temp)
				return (NULL);
			temp->n = n;
			aux = *h;
			while (aux->next)
			{
				if (idx == num)
				{
					temp->prev = aux->prev;
					temp->next = aux;
					temp->prev->next = temp;
					temp->next->prev = temp;
					break;
				}
				num++;
				aux = aux->next;
			}
			num++;
			if (idx == num)
			{
				temp->prev = aux;
				temp->next = NULL;
				temp->prev->next = temp;
			}
		}
	}
	return (temp);
}
