#include "hash_tables.h"

/**
 * hash_table_get - Funciont that retrieves a value associated with a key.
 * @key: pointr to constant char
 * @ht: pointer to const hash_table_t
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL || key[0] == '\0' || key == (void *)0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	ptr =  ht->array[index];
	if (ptr == NULL)
		return (NULL);
	if (strcmp(ptr->key, key) == 0)
		return (ptr->value);

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
