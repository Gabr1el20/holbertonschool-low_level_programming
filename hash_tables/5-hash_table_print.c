#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nodo;
	char *separator = "";

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		nodo = ht->array[i];
		while (nodo)
		{
			printf("%s", separator);
			printf("'%s': '%s'", nodo->key, nodo->value);
			separator = ", ";
			nodo = nodo->next;
		}
	}
	printf("}\n");
}
