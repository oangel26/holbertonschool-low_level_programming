#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node at
 *  a given position.
 * @h: pointer to a pointer to dlistint_t lsit
 * @idx: index of the list where the new node should be added.
 * @n: integer n of new_node
 * Return:  address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr = *h;
	unsigned int counter = 1;

	/* GUARD CONDITION */
	if (h == NULL)
		return (NULL);

	/* new_node declaration */
	new_node = malloc(sizeof(dlistint_t));
	/* GUARD CONDITION for memory allocation new_node */
	if (new_node == NULL)
		return (NULL);
	/* new_node initialization */
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (idx == 0)
		add_dnodeint(&(*h), n);
	else
	{
		while (counter < idx && ptr != NULL)
		{
			printf("counter %d\n", counter);
			ptr = ptr->next;
			counter++;
		}
		if (ptr == NULL)
			return (NULL);
		else if (ptr->next == NULL)
			add_dnodeint_end(&(*h), n);
		else
		{
			new_node->next = ptr->next;
			new_node->prev = ptr;
			ptr->next->prev = new_node;
			ptr->next = new_node;
		}
	}
	return (*h);
}
