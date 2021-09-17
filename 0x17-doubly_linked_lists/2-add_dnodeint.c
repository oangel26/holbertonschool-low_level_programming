#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: pointer to a pointer of a dlistint_t list
 * @n: constant int number
 * Return: address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* GUARD CONDTIONS */
	if (head == NULL)
		return (NULL);

	/* Creation of the new node */
	new_node = malloc(sizeof(dlistint_t));
	/* GUARD CONDITION if not memory allocation */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}
