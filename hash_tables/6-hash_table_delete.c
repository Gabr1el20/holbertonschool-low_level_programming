#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *actual = NULL, *temp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		actual = ht->array[i];
		while (actual != NULL)
		{
			temp = actual;
			actual = actual->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
