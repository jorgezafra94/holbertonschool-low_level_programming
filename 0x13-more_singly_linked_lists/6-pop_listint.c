#include "lists.h"
/**
 * pop_listint - add a node at the end of the linked list
 * @head: pointer to a pointer taht point to linked list
 * Return: a pointer to the linked list
 */
int pop_listint(listint_t **head)
{
	int a = 0;
	listint_t *aux;

	if (*head == NULL || head == NULL)
		return (a);

/*when get the last element*/
	if ((*head)->next == NULL)
	{
		a = (*head)->n;
		free(*head);
	}
	/* all the other previous elements*/
	else
	{
		aux = *head;
		a = aux->n;
		*head = (*head)->next;
		free(aux);
	}
	return (a);

}
