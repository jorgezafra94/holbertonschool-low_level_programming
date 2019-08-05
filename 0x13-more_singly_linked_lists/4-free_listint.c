#include "lists.h"
/**
 * free_listint - free each element of the linked list
 * @head: pointer to the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

}
