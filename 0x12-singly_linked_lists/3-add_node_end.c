#include "lists.h"
/**
 * add_node_end - add a new element before the NULL
 * @head :linked list
 * @str: new string to add
 * Return: return the list but with the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *aux;
	int c = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);

	while (str[c] != '\0')
		c++;

	temp->len = c;

	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		temp->next = aux->next;
		aux->next = temp;
	}
	return (*head);
}
