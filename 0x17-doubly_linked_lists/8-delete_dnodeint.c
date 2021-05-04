#include "lists.h"

/**
 * delete_dnodeint_at_index - functiond deletes the node at index of a list
 * @head: pointer to pointer to node data structure
 * @index: unsigned int with of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	/*Guard condition for NULL pointer value*/
	if (head == NULL)
	{
		return (-1);
	}
	/*Guard condition for if head is NULL)*/
	if (*head == NULL)
	{
		free (*head);
		return (1);
	}
	/*Loop to find length of list */
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	/*Edge case if index is first position*/
	if (index == 0)
	{
		tmp = *head;
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	/*Edge case if index is last postion*/
	else if (tmp->next == NULL)
	{
		if (tmp->prev != NULL)
		{
			tmp->prev->next = NULL;
		}
		free (tmp);
		return (1);
	}
	/*EDGE case if index is in middle of list*/
 	else if (tmp != NULL)
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free (tmp);
		return (1);
	}
	/*EDGE case if index is out of list lenght*/
	else
	{
		return (-1);
	}
}
