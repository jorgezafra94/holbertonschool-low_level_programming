#include "lists.h"
/**
 * free_aux - free each element of the linked aux_list
 * @a: pointer to the linked list
 */
void free_aux(aux_list *a)
{
	aux_list *aux;

	if (a == NULL)
		return;
	while (a != NULL)
	{
		aux = a;
		a = a->sig;
		free(aux);
	}
}
/**
 * print_listint_safe - print the element of the linked list
 * @head: linked list
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	int c = 0;
	listint_t *m;
	aux_list *g1 = NULL, *temp, *g2;

	if (!head)
		return (c);
	m = (listint_t *)head;
	for (; m != NULL; g2 = g1, c++, m = m->next)
	{
		temp = malloc(sizeof(aux_list));
		if (!temp)
			exit(98);
		temp->p = m;
		temp->sig = NULL;
		if (c == 0)
			g1 = temp;
		else
		{
			while (g2->sig != NULL)
			{
				if (m == g2->p)
				{
					printf("-> [%p] %d\n", (void *)m, m->n);
					free_aux(g1);
					return (c);
				}
				g2 = g2->sig;
			}
			if (g2->sig == NULL)
			{
				if (m == g2->p)
				{
					printf("-> [%p] %d\n", (void *)m, m->n);
					free_aux(g1);
					return (c);
				}
			}
			g2->sig = temp;
		}
		printf("[%p] %d\n", (void *)m, m->n);
	}
	free_aux(g1);
	return (c);
}
