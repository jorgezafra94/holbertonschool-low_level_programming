#include "lists.h"

/**
 * free_aux - frees a linked list
 * @p: head of a list.
 *
 * Return: no return.
 */
void free_aux(aux_list *p)
{
	aux_list *aux;

	if (p == NULL)
	{
		return;
	}
	while (p != NULL)
	{
		aux = p;
		p = p->next;
		free(aux);
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	aux_list *a, *b, *t;

	a = NULL;
	for (; head != NULL; c++, head = head->next)
	{
		t = malloc(sizeof(aux_list));
		if (!t)
			exit(98);
		t->p = (void *)head;
		t->next = a;
		a = t;
		b = a->next;
		while (b != NULL)
		{
			if (head == b->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_aux(a);
				return (c);
			}
			b = b->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
	}
	free_aux(a);
	return (c);
}
