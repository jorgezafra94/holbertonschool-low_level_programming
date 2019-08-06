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
		free(a);
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
 * imp - print a message depending of value of a
 * @a: integer to choose an option
 * @nuevo: listint pointer
 */
void imp(int a, listint_t *nuevo)
{
	if (a == 1)
	{
		printf("[%p] %d\n", (void *)nuevo, nuevo->n);
	}
	if (a == 2)
	{
		printf("-> [%p] %d\n", (void *)nuevo, nuevo->n);
	}
}
/**
 * print_listint_safe - print the element of the linked list
 * @head: linked list
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	int cont = 1;
	listint_t *nuevo;
	aux_list *guardar1, *temp, *guardar2;

	if (!head)
		return (0);
	guardar1 = NULL;
	nuevo = (listint_t *)head;
	for (; nuevo != NULL; cont++)
	{
		temp = malloc(sizeof(aux_list));
		if (!temp)
			exit(98);
		if (cont == 1)
		{
			temp->p = (aux_list *)head;
			temp->sig = guardar1;
			guardar1 = temp;
		}
		else
		{
			while (guardar2->sig != NULL)
			{
				if (nuevo == guardar2->p)
				{ imp(2, nuevo);
					free_aux(guardar1);
					return (cont); }
				guardar2 = guardar2->sig;
			}
			temp->p = nuevo;
			temp->sig = guardar2->sig;
			guardar2->sig = temp;
		}
		guardar2 = guardar1;
		imp(1, nuevo);
		nuevo = nuevo->next;
	}
	free_aux(guardar1);
	return (cont);

}
