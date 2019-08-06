#include "lists.h"
/**
 * insert_nodeint_at_index - add the node in the idx
 * position in the linked list
 * @head: pointer to a pointer that points to linked list
 * @idx:position to add the new node
 * @n: value of memeber n of the new node;
 * Return: a node of the linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 1;
	listint_t *aux, *p;

	if (head == NULL || *head == NULL)
		return (NULL);
	aux = *head;
	for (; aux->next != NULL; cont++)
		aux = aux->next;
	if (cont < idx)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (*head);
	}
	cont = 1;
	aux = *head;
	while (aux->next != NULL)
	{
		if (cont == idx)
			break;
		cont++;
		aux = aux->next;
	}
	p->next = aux->next;
	aux->next = p;
	return (*head);
}
