#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 * @key: pointer to constant unsigned char (key)
 * @size: size of the array (unsigned long int)
 * Return: index for given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
