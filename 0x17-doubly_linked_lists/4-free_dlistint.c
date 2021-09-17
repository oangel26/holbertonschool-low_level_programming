#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to dlistint_t list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	/* GUARD CONDITION if non existing list */
	if (head == NULL)
		return;

	else
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
