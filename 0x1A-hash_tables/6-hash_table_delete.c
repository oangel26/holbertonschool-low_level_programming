#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: pointer to hash_table_t data structure
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *ptr;

	if (ht == NULL)
		return;

	printf("paso por return");
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			printf("%s key ptr befor %p\n", ht->array[i]->key,(void *)ht->array[i]);
			free(ht->array[i]);
			continue;
		}
		else
		{
			if (ht->array[i]->next == NULL)
			{
				printf("%s key ptr befor %p\n", ht->array[i]->key,(void *)ht->array[i]);
				free(ht->array[i]);
			}
			else
			{
				ptr = ht->array[i];
				while (ptr != NULL)
				{
					tmp = ptr;
					ptr = ptr->next;
					printf("%s key ptr befor %p\n", ht->array[i]->key,(void *)ht->array[i]);
					
					free(tmp);
				}
				free(ptr);
			}
		}
	}
	free(ht->array);
	free(ht);
}
