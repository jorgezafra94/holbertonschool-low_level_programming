#include "hash_tables.h"
/**
 * hash_table_get - function that get the value of the specified key
 * @ht: table
 * @key: key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	else
		return (ht->array[index]->value);
}
