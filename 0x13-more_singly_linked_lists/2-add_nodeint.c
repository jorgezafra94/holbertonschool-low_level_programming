#include "lists.h"
/**
 * add_nodeint - add a node at the beginning of the linked list
 * @head: pointer to linked list
 * @n: constat to add in the linked list
 * Return: a pointer to the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

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
	else if (*head != NULL)
	{
		p->next = *head;
		*head = p;
	}
	return (*head);

}
