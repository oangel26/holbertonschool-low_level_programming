#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: pointer to hash table data structure (hash_table_t*)
 * @key: pointer to key (const char*): Always EXIT_SUCCESS.
 * @value: pointer to value (const char*)
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int k_index;

	/* GUARD CONDITION if hash_table does not exists */
	if (ht == NULL ||  key == NULL || key == (void *)0 || key[0] == '\0')
		return (0);

	new_node = malloc(sizeof(hash_node_t));

	/* GUARD CONDITION for malloc allocation */
	if (new_node == NULL)
		return (0);

	/* Node values initialization */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* Hash index for the key given */
	k_index = key_index((const unsigned char *) new_node->key, ht->size);

	/* If index is NULL asign new_node */
	if (ht->array[k_index] == NULL)
		ht->array[k_index] = new_node;

	/* In case of collision generate a linked list in given index */
	else
	{
		new_node->next = ht->array[k_index];
		ht->array[k_index] = new_node;
	}
	return (1);
}
