#include "hash_tables.h"
/**
 * hash_table_print - print all the hash table
 * @ht: hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;
	char *s = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux != NULL)
			{
				printf("%s\'%s\': \'%s\'", s, aux->key, aux->value);
				s = ", ";
				aux = aux->next;
			}
		}
	}
	printf("}\n");
}
