#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int i;
	int cont = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		cont++;
	}
	if (*head == NULL)
	{
		new_node = malloc(sizeof(list_t));
		new_node->str = strdup(str);
		new_node->len = cont;
		new_node->next = new_node;
		new_node = NULL;
		
	}

	return (new_node);
}
