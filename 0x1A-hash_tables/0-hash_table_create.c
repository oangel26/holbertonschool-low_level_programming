#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: (unisigned long int) size of array of hash table
 * Return: pointer to struct of o the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
