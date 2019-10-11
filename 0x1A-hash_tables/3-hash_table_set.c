#include "hash_tables.h"
/**
 * add_hash_node - add node to the hash table
 * @node: hash node to modify
 * @key: key
 * @value: value of the key
 * Return: 1 if could add or 0 if not
 */
int add_hash_node(hash_node_t **node, const char *key, const char *value)
{
	hash_node_t *temp;

	if (*node == NULL)
	{
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = NULL;
		*node = temp;
	}
	else
	{
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = (*node);
		*node = temp;
	}
	return (1);
}
/**
 * hash_table_set - add a value and key for a specific index
 * @ht: hash table
 * @key: key
 * @value: value of the specified key
 * Return: 1 if succeed the adding of the node or 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *aux;
	int flag = 0;

	if (ht == NULL || value == NULL || key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		flag = add_hash_node(&(ht->array[index]), key, value);
		if (flag == 0)
			return (0);
	}
	else
	{
		aux = ht->array[index];
		while (aux != NULL)
		{
			if (strcmp(aux->key, key) == 0)
				break;
			aux = aux->next;
		}
		if (aux == NULL)
		{
			flag =  add_hash_node(&(ht->array[index]), key, value);
			if (flag == 0)
				return (0);
		}
		else
		{
			free(aux->value);
			aux->value = strdup(value);
		}
	}
	return (1);
}
