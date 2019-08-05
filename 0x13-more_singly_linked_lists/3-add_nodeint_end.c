#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the linked list
 * @head: pointer to linked list
 * @n: constat to add in the linked list
 * Return: a pointer to the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *aux;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	/*when enter for first time*/
	if (*head == NULL)
	{
		p->next = *head;
		*head = p;
	}
	/* all the other times*/
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		if (aux->next == NULL)
		{
			p->next = aux->next;
			aux->next = p;
		}
	}
	return (*head);

}
