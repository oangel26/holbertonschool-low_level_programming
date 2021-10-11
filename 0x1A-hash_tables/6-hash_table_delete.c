#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: pointer to hash_table_t data structure
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL;
	hash_node_t *tmp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				tmp = ptr;
				ptr = ptr->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
