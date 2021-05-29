#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to hash table (hash_table_t) data structure
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int j;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next == NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			}
			else
				while (ht->array[i]->next == NULL)
				{
					printf("'%s': '%s', ", ht->array[i]->next->key, ht->array[i]->next->value);
					ht->array[i]->next = ht->array[i]->next->next;
				}
			j = i + 1;
			while (ht->array[j] == NULL)
			{
				if (ht->array[j + 1] != NULL)
				{
					printf(", ");
					break;
				}
				else
					j++;
			}
		}
	}
	printf("}\n");
}
