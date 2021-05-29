#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to hash table (hash_table_t) data structure
 * @key: pointer to key (string)
 * Return: Value associated with element, or NULL if key could't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value = NULL;

	index = key_index((unsigned char *)key, ht->size);
	if (key == NULL)
	{
		return (NULL);
	}
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	value = ht->array[index]->value;
	return (value);
}
