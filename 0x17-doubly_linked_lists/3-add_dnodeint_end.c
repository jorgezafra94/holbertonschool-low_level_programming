#include "lists.h"
/**
 *add_dnodeint_end - add a note at the end of the doubly link list
 *@head: first position of linked list
 *@n: data to store
 *Return: a doubly linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *aux;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
/*Careful with the first time*/
	if (*head == NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	aux = *head;
	while (aux->next)
		aux = aux->next;
	temp->next = aux->next;
	temp->prev = aux;
	aux->next = temp;
	return (aux->next);
}
