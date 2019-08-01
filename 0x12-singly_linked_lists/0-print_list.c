#include "lists.h"
/**
 * print_list - print all the elements of the linked list
 * @h :linked list
 * Return: return the number of elements
 */
size_t print_list(const list_t *h)
{
	int c = 0, aux1 = 0;
	char *nil = "(nil)";

	if (h == NULL)
		return (0);

	while (h->next != NULL)/*search if the pointer is null*/
	{
		if (h->str == NULL)/*search if the string is null*/
		{
			printf("[%d] %s\n", aux1, nil);
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;/*change the pointer into the next one*/
		c++;
	}
	if (!h->next)/*we do this in order to print the last element*/
	{
		printf("[%u] %s\n", (*h).len, (*h).str);
		c++;
	}
	return (c);
}
