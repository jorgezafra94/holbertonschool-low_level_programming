#include "lists.h"
/**
 *delete_dnodeint_at_index - insert node into a doubly linked list
 *@head: doubly linked list
 *@index: position to store the value
 *Return: doubly linked list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int num = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = *head;
	while (aux)
		num++, aux = aux->next;
	if (index >= num)
		return (-1);
	num = 0;
	aux = *head;
	while (aux)
	{
		if (num == index)
		{
			if (index == 0 && aux->next)
			{
				*head = aux->next;
				(*head)->prev = NULL;
				free(aux);
				return (1);
			}
			else if (index == 0 && !(aux->next))
			{
				free(*head);
				*head = NULL;
				return (1);
			}
			else
			{
				(aux->prev)->next = aux->next;
				(aux->next)->prev = aux->prev;
				free(aux);
				return (1);
			}
		}
		num++, aux = aux->next;
	}
	return (-1);
}
