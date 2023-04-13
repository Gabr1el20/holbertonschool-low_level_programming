#include "hash_tables.h"

/**
 * hash_node_delete - Deletes a node
 * @nd: node
 */
void hash_node_delete(hash_node_t *nd)
{
	free(nd->key);
	free(nd->value);
	free(nd);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
			hash_node_delete(node);
	}
	free(ht->array);
	free(ht);
}
