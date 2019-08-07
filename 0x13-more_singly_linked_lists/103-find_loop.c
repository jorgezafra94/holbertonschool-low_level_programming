#include "lists.h"

/**
 * find_listint_loop - search the start of the loop in  a linked list.
 * @head: head of a list.
 * Return: the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f, *s;

	if (head == NULL)
		return (NULL);
	f = head;
	s = head;
	while (f->next->next != NULL && s->next != NULL)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			break;
		}
	}
	if (f != s)
	{
		return (NULL);
	}
	else
	{
		s = head;
		while (f != s)
		{
			s = s->next;
			f = f->next;
		}
		return (f);
	}
}
