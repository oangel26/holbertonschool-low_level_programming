#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: pointer to a constant dlistint_t list
 * Return: number of nodes in list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	
	if (h == NULL)
		return (0);

	while(h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return num_nodes;
}
