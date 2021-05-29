#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: pointer to (hash_table_t) hash table to be updated
 * @key: pointer to (const char) key to be added
 * @value: pointer to (const char) value to be added
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (ht == NULL)
	{
		printf("Hash table cant be NULL\n");
		return (0);
	}
	if (key == NULL)
	{
		printf("key cannot be an empty string\n");
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		printf("cant alloc memory for new node\n");
		return (0);
	}
	new_node->key = (char *) key;
	new_node->value = (char *) value;

	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	return (1);
}
