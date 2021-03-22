#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list.
 * @head: pointer to apointer whith the address of the head
 * @str: constrant string
 * Return: pointer to a data structure list (list_t)
 */

list_t *add_node_end(list_t **head, const char *str)
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
		new_node = *head;
		while (new_node->next != NULL)
		{
			new_node = new_node->next;
		}
		new_node->next = malloc(sizeof(list_t));
		if (new_node->next == NULL)
		{
			return (NULL);
		}
		new_node->next->str = strdup(str);
		new_node->next->len = n;
		new_node->next->next = NULL;
	}
	return (*head);
}
