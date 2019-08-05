#include "lists.h"
/**
 * delete_nodeint_at_index - delete node in index position
 * @head: pointer to a pointer that points to linked list
 * @index:position to delete the node
 * Return: 1 if succeeded -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cont = 1;
	listint_t *aux, *aux2, *temp;

	if (*head == NULL)
		return (-1);
	aux = *head;
	for (; aux->next != NULL; cont++)
		aux = aux->next;
	if (cont <= index)
		return (-1);

	aux = *head;
	aux2 = aux->next;
	if (index == 0 && *head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	cont = 1;
	while (aux2 != NULL)
	{
		if (cont == index)
			break;
		cont++;
		aux = aux2;
		aux2 = aux2->next;
	}
	temp = aux2;
	aux->next = aux2->next;
	free(temp);
	return (1);
}
