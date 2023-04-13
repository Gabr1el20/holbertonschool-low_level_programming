#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *actual = NULL;

	for (i = 0; i < ht->size; i++)
	{
		actual = ht->array[i];
		while (actual)
		{
			free(actual->value);
			free(actual->key);
			free(actual);
			actual = actual->next;
		}
	}
	free(ht->array[i]);
	free(ht);
}
