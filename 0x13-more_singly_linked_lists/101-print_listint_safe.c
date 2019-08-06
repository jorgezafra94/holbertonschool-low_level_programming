#include "lists.h"
/**
 * free_aux - free each element of the linked aux_list
 * @a: pointer to the linked list
 */
void free_aux(aux_list *a)
{
	aux_list *aux;

	if (a == NULL)
	{
		return;
	}
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
	int cont = 0;
	aux_list *a, *b, *t;

	if (!head)
		return (0);
	a = NULL;
	for (; head != NULL; cont++, head = head->next)
	{
		t = malloc(sizeof(aux_list));
		if (!t)
			exit(98);
		t->p = (void *)head;
		t->sig = a;
		a = t;
		b = a->sig;
		while (b != NULL)
		{
			if (head == b->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_aux(a);
				return (cont);
			}
			b = b->sig;
		}
		printf("[%p]  %d\n", (void *)head, head->n);
	}
	free_aux(a);
	return (cont);
}
