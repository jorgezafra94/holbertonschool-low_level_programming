#include "lists.h"
/**
 * sum_listint - sum all the members n of the linked list
 * @head: pointer to linked list
 * Return: sum of all n members the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux;

	if (head == NULL)
		return (sum);
	aux = head;

	while (aux->next != NULL)
	{
		sum = sum + aux->n;
		aux = aux->next;
	}
	if (aux->next == NULL)
		sum = sum + aux->n;

	return (sum);

}
