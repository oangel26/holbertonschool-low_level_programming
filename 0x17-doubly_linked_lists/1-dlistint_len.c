#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Function that return the number of elements in a linked
 * dlistint_t list.
 * @h: pointer to a constant dlistint_t list
 * Return: Always
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements = 0;

	/* GUARD CONTITION */
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
