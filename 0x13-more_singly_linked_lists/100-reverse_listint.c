#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer that points to a linked list
 * Return: return a pointer to a linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nuevo = NULL, *actual = NULL;

	while (*head != NULL)
	{
		actual = *head;
		*head = (*head)->next;
		actual->next = nuevo;
		nuevo = actual;
	}
	*head = actual;
	return (*head);
}
