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
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	/*Loop to find length of list*/
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	/*Condition if index is first position*/
	if (index == 0)
	{
		tmp = *head;
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		free(tmp);
		return (1);
	}
	else if (index == i)
	{
		if (tmp->prev != NULL)
		{
			tmp->prev->next = NULL;
		}
		free (tmp);
		return (1);
	}
	else if (index < i)
	{
	
		free (tmp);
		return (1);
	}
	else
	{
		return (-1);
	}
}
