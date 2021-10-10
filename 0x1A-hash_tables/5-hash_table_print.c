#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: pointer to hash table
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int coma_switch = 0;
	hash_node_t *ptr = NULL;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		else if (ht->array[i]->next == NULL)
		{
			if (coma_switch == 0)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				coma_switch = 1;
			}
			else
			{
				printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			}
		}
		else
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				if (coma_switch == 0)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
					 coma_switch = 1;
				}
				else
				{
					printf(", ");
					printf("'%s': '%s'", ptr->key, ptr->value);
				}
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
