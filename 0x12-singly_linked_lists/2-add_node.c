#include "lists.h"
/**
 * add_node - add a new element
 * @head :linked list
 * @str: new string to add
 * Return: return the list but with the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int c = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	while (str[c] != '\0')
	{
		c++;
	}
	temp->len = c;
	temp->next = *head;
	*head = temp;
	return (*head);
}
