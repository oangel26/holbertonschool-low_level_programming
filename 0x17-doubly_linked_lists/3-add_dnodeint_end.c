#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end
 *  of a dlistint_t list.
 * @head: pointer to pointer of dlistint_t list
 * @n: constant integer number
 * Return: address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr = *head;
	
	/* GUARD CONDITION */
	if (head == NULL)
		return (NULL);

	/* Creation of new node */
	new_node = malloc(sizeof(dlistint_t));
	/* GUARD CONDITION if not enough memory to alloc new node */
	if (new_node == NULL)
		return (NULL);
			
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* EDGE case list is NULL */
	if (*head == NULL)
		*head = new_node;

	/* EDGE case exisitng list */
	else
	{
		while (ptr->next != NULL)
		{
			ptr = (ptr)->next;
		}
		new_node->prev = (ptr);
		(ptr)->next = new_node;
	}
	return (*head);
}
