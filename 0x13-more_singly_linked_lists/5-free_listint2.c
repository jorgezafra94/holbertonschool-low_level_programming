#include "lists.h"
/**
 * free_listint2 - free each element of the linked list
 * @head: pointer to a pointer that point to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (*head == NULL)
	{
		free(head);
		return;
	}
	while (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	free(*head);

}
