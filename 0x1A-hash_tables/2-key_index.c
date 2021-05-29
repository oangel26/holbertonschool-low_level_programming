#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: pointer to (const unsigned char) string, key value
 * @size: (unsigned long int) size of array
 * Return: the index from key given
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	/* Hash function which return the hash according to given key*/
	hash = hash_djb2((unsigned char *)key);

	/* Gets the index from hash and size given*/
	index = hash % size;

	return (index);
}
