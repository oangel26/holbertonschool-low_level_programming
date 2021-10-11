#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: pointer to hash_table_t data structure
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	free(ht->array);
	free(ht);
}
