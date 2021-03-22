#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: pointer to point of data structur list_t
 * @str: constnt string
 * Return data structre
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int n = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	if (*head == NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = n;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
