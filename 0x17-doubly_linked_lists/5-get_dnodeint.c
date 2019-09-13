#include "lists.h"
/**
 *get_dnodeint_at_index - get the value of the element specified
 *@head: doubly linked list
 *@index: position to search
 *Return: the pointer of this position or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);
	aux = head;
	while (aux)
	{
		num++;
		aux = aux->next;
	}
	if (index >= num)
		return (NULL);
	aux = head;
	num = 0;
	while (aux)
	{
		if (num == index)
			return (aux);
		aux = aux->next;
		num++;
	}
	return (NULL);
}
