#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of array inside the hash_table
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new;
	hash_node_t **elem;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	elem = malloc(sizeof(hash_node_t *) * size);
	if (elem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		elem[i] = NULL;
	new->size = size;
	new->array = elem;
	return (new);
}
