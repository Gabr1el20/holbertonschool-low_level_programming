#include "hash_tables.h"
/**
 * hash_node_delete - Deletes a hash node
 * @nd: the node
 */
void hash_node_delete(hash_node_t *nd)
{
	free(nd->value);
	free(nd->key);
	free(nd);
}
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
		if (actual != NULL)
			hash_node_delete(actual);
	}
	free(ht->array);
	free(ht);
}
