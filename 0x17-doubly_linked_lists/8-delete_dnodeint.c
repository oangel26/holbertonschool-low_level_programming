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

/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list
 * @head: pointer to pointer to dlistint_t list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	/* EDGE case no nodes in list */
	if (head == NULL || *head == NULL)
		return (-1);
	/* EDGE case list of single node node & index = 0 */
	if (index == 0 && (*head)->next == NULL)
	{
		*head = NULL;
		free(ptr);
	}
	/* EDGE case list greater than 1 & index = 0 */
	else if (index == 0 && (*head)->next != NULL)
	{
		*head = (*head)->next;
		free(ptr);
		(*head)->prev = NULL;
	}
	else
	{
		ptr = get_dnodeint_at_index(*head, index);
		/* EDGE case if index out of range */
		if (ptr == NULL)
			return (-1);
		/* EDGE case index is last node */
		else if (ptr->next == NULL)
		{
			ptr->prev->next = NULL;
			free(ptr);
		}
		/* EDGE case node is in middle of two nodes */
		else
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
		}
	}
	return (1);
}
