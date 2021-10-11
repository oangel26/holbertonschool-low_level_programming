#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: size of the array (unsigned long int.
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	else
	{
		hash_table->size = size;
		hash_table->array = malloc(sizeof(hash_node_t *) * size);

		if (hash_table->array == NULL)
		{
			free(hash_table);
			return (NULL);
		}
	}
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);
}
