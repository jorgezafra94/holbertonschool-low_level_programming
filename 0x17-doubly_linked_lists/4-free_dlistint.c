#include "lists.h"
/**
 *free_dlistint - frees a doubly linked list
 *@head: doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (!head)
		return;

	while(head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
