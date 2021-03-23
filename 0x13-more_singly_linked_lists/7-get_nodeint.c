#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer to head of list
 * @index: unsigned int position of node
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		i++;
	}
	return (head);
}
