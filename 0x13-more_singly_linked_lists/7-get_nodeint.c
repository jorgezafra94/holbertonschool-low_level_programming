#include "lists.h"
/**
 * get_nodeint_at_index - get the node in the index position of the linked list
 * @head: pointer to linked list
 * @index: position it starts at 0
 * Return: a node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *aux;

	aux = head;
	while (aux != NULL)
	{
		cont++;
		aux = aux->next;
	}
	if (aux == NULL)
	{
		cont++;
	}

	if (cont <= index)
	{
		return (NULL);
	}
	else
	{
		cont = 0;
		aux = head;
		while (aux != NULL)
		{
			if (cont == index)
			{
				break;
			}
			else
			{
				cont++;
				aux = aux->next;
			}
		}
		return (aux);
	}

}
