#include "lists.h"
/**
 * free_aux - free each element of the linked aux_list
 * @pointer: pointer to the linked list
 */
void free_aux(aux_list **pointer)
{
	aux_list *aux;

	if (pointer == NULL)
	{
		return;
	}
	while (*pointer != NULL)
	{
		aux = *pointer;
		*pointer = (*pointer)->sig;
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

	a = NULL;
	while (head != NULL)
	{
		t = malloc(sizeof(aux_list));
		if (!t)
			exit(98);
		t->p = (void *)head;
		t->sig = a;
		a = t;
		b = a;
		while (b->sig != NULL)
		{
			b = b->sig;
			if (head == b->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_aux(&a);
				return (cont);
			}
		}
		printf("[%p]  %d\n", (void *)head, head->n);
		cont++;
		head = head->next;
	}
	free_aux(&a);
	return (cont);
}
