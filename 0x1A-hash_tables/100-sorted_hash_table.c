#include "hash_tables.h"
/**
 * shash_table_create - function that creates a shash table
 * @size: size of the array of the hash table
 * Return: Hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i;
	shash_table_t *new;
	shash_node_t **elem;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);
	elem = malloc(sizeof(shash_node_t *) * size);
	if (elem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		elem[i] = NULL;
	new->shead = NULL;
	new->stail = NULL;
	new->size = size;
	new->array = elem;
	return (new);
}
/**
 * orden - set the head and tail of the doubly linked list
 * @table: shash table
 */
void orden(shash_table_t **table)
{
	shash_node_t *aux;

	aux = (*table)->shead;
	while (aux->snext != NULL)
		aux = aux->snext;
	(*table)->stail = aux;
	aux = (*table)->shead;
	while (aux->sprev != NULL)
		aux = aux->sprev;
	(*table)->shead = aux;
}
/**
 * dou_pos - put the new node in the correct position
 * @table: shash table
 * @temp: shash node to organize inside the doubly linked list
 */
void dou_pos(shash_table_t **table, shash_node_t **temp)
{
	int flag = 0;
	shash_node_t *aux;
	char *s1 = NULL, *s2 = NULL;

	aux = (*table)->shead;
	if (aux == NULL)
	{
		(*temp)->snext = NULL, (*temp)->sprev = NULL;
		(*table)->shead = (*temp), (*table)->stail = (*temp);
		return;
	}
	s1 = (*temp)->key;
	while (aux != NULL)
	{ s2 = aux->key;
		if (strcmp(s1, s2) < 0)
		{
			flag = 1;
			(*temp)->snext = aux;
			(*temp)->sprev = aux->sprev;
			if (aux->sprev != NULL)
				aux->sprev->snext = (*temp);
			aux->sprev = (*temp);
			break;
		}
		aux = aux->snext;
	}
	if (flag == 0)
	{
		aux = (*table)->shead;
		while (aux->snext != NULL)
			aux = aux->snext;
		s2 = aux->key;
		if (strcmp(s1, s2) < 0)
		{ (*temp)->snext = aux, (*temp)->sprev = aux->sprev;
			aux->sprev = (*temp); }
		else if (strcmp(s1, s2) > 0)
		{ (*temp)->snext = aux->snext, (*temp)->sprev = aux;
			aux->snext = (*temp); }
	}
	orden(table);
}
/**
 * H_N - add a new node in the singly list depending of the index and the hash
 * @t: shash table
 * @N: shash Node to put
 * @key: key
 * @val: value of the key
 * Return: 1 if succeed or 0 if it fails
 */
int H_N(shash_table_t **t, shash_node_t **N, const char *key, const char *val)
{
	shash_node_t *temp;

	if (*N == NULL)
	{
		temp = malloc(sizeof(shash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(val);
		temp->key = strdup(key);
		temp->next = NULL;
		dou_pos(t, &temp);
		*N = temp;
	}
	else
	{
		temp = malloc(sizeof(shash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(val);
		temp->key = strdup(key);
		temp->next = (*N);
		temp->sprev = NULL;
		temp->snext = NULL;
		dou_pos(t, &temp);
		*N = temp;
	}
	return (1);
}
/**
 * shash_table_set - set the new node depending of the index
 * @ht: shash table
 * @key: key
 * @value: value
 * Return: 1 if succeed or 0 if it fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *aux;
	int flag = 0;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		flag = H_N(&ht, &(ht->array[index]), key, value);
		if (flag == 0)
			return (0);
	}
	else
	{
		aux = ht->array[index];
		while (aux != NULL)
		{
			if (strcmp(aux->key, key) == 0)
			{
				free(aux->value);
				aux->value = strdup(value);
				return (1);
			}
			aux = aux->next;
		}
		if (aux == NULL)
		{
			flag =  H_N(&ht, &(ht->array[index]), key, value);
			if (flag == 0)
				return (0);
		}
	}
	return (1);
}
/**
 * shash_table_get - function that get the value of the specified key
 * @ht: table
 * @key: key
 * Return: the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *aux;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];

	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			break;
		aux = aux->next;
	}
	if (aux == NULL)
	{
		return (NULL);
	}
	else
	{
		return (aux->value);
	}
}
/**
 * shash_table_print - print the doubly linked list that has all the elements
 * of the shash table, organized
 * @ht: shash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux;
	char *s = "";

	if (ht == NULL)
		return;
	printf("{");
	aux = ht->shead;
	while (aux != NULL)
	{
		printf("%s\'%s\': \'%s\'", s, aux->key, aux->value);
		s = ", ";
		aux = aux->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print the doubly linked list form the tail
 * to head
 * @ht: shash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux;
	char *s = "";

	if (ht == NULL)
		return;
	printf("{");
	aux = ht->stail;
	while (aux != NULL)
	{
		printf("%s\'%s\': \'%s\'", s, aux->key, aux->value);
		s = ", ";
		aux = aux->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free the shash table
 * @ht: shash table to free
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *aux, *temp;

	aux = ht->shead;
	while (aux != NULL)
	{
		temp = aux;
		aux =  aux->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
