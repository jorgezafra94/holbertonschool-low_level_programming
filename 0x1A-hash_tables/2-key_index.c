#include "hash_tables.h"
/**
 * key_index - get the index where the key should be stored
 * @key: is a string
 * @size: size of array of the hash table
 * Return: index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
