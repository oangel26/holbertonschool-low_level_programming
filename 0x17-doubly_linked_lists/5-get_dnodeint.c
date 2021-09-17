#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list
 * @head: pointer to dlistint_t list
 * @index: index is the index of the node, starting from 0
 * Return: nth node of dlistint_t list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	/* GUARD CONDITION */
	if (head == NULL)
		return (NULL);

	else
	{
		while (head != NULL)
		{
			if (counter == index)
				break;

			else
			{
			head = head->next;
			counter++;
			}
		}
		/* CASE index is out of list */
		if (head == NULL)
			return (NULL);
		/* Return index in list */
		else
			return (head);
	}
}
