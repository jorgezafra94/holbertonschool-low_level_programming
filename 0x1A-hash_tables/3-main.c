#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int id;
	char *s;


	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "lucho");
	hash_table_set(ht, "mentioner", "hola");
	hash_table_set(ht, "betty", "el mejor");
	s = "betty";
	id = key_index((unsigned char *)s, 1024);
	printf("%s\n, %s\n", ht->array[id]->key, ht->array[id]->value);
/*	printf("%s\n, %s\n", ht->array[id]->next->key, ht->array[id]->next->value);*/
	return (EXIT_SUCCESS);
}
