#include "hash_tables.h"


/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table (hash_table_t) data structure
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
